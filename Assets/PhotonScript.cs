﻿
using System;
using UnityEngine;
using System.Collections;

/// <summary>
/// This script automatically connects to Photon (using the settings file),
/// tries to join a random room and creates one if none was found (which is ok).
/// </summary>
public class PhotonScript : Photon.MonoBehaviour
{

    void Start()
    {
//		PhotonNetwork.logLevel = PhotonLogLevel.Full;
        PhotonNetwork.ConnectUsingSettings("0.1");
    }
 
    void OnGUI()
    {
        GUILayout.Label(PhotonNetwork.connectionStateDetailed.ToString());
    }
    public void OnConnectedToMaster()
    {
        PhotonNetwork.JoinRandomRoom();
    }

    public void OnPhotonRandomJoinFailed()
    {
        PhotonNetwork.CreateRoom(null);
    }
	public void OnJoinedRoom()
    {
		GameObject monster = PhotonNetwork.Instantiate("monsterprefab3", Vector3.zero, Quaternion.identity, 0);
		monster.GetComponent<myThirdPersonController>().isControllable = true;
//		CharacterController controller = monster.GetComponent<CharacterController>();
//		controller.enabled = true;
//		 camera = monster.GetComponent<CharacterCamera>();
//		camera.enabled = true;
    }

    public void OnJoinedLobby()
    {
    }


//    /// <summary>Connect automatically? If false you can set this to true later on or call ConnectUsingSettings in your own scripts.</summary>
//    public bool AutoConnect = true;
//
//    public byte Version = 1;
//
//    /// <summary>if we don't want to connect in Start(), we have to "remember" if we called ConnectUsingSettings()</summary>
//    private bool ConnectInUpdate = true;
//
//    public virtual void Start()
//    {
//        PhotonNetwork.autoJoinLobby = false;    // we join randomly. always. no need to join a lobby to get the list of rooms.
//    }
//
//    public virtual void Update()
//    {
//        if (ConnectInUpdate && AutoConnect && !PhotonNetwork.connected)
//        {
//            Debug.Log("Update() was called by Unity. Scene is loaded. Let's connect to the Photon Master Server. Calling: PhotonNetwork.ConnectUsingSettings();");
//
//            ConnectInUpdate = false;
//            PhotonNetwork.ConnectUsingSettings(Version + "."+Application.loadedLevel);
//        }
//    }
//
//    // to react to events "connected" and (expected) error "failed to join random room", we implement some methods. PhotonNetworkingMessage lists all available methods!
//
//    public virtual void OnConnectedToMaster()
//    {
//        if (PhotonNetwork.networkingPeer.AvailableRegions != null) Debug.LogWarning("List of available regions counts " + PhotonNetwork.networkingPeer.AvailableRegions.Count + ". First: " + PhotonNetwork.networkingPeer.AvailableRegions[0] + " \t Current Region: " + PhotonNetwork.networkingPeer.CloudRegion);
//        Debug.Log("OnConnectedToMaster() was called by PUN. Now this client is connected and could join a room. Calling: PhotonNetwork.JoinRandomRoom();");
//        PhotonNetwork.JoinRandomRoom();
//    }
//
//    public virtual void OnPhotonRandomJoinFailed()
//    {
//        Debug.Log("OnPhotonRandomJoinFailed() was called by PUN. No random room available, so we create one. Calling: PhotonNetwork.CreateRoom(null, new RoomOptions() {maxPlayers = 4}, null);");
//        PhotonNetwork.CreateRoom(null, new RoomOptions() { maxPlayers = 4 }, null);
//    }
//
//    // the following methods are implemented to give you some context. re-implement them as needed.
//
//    public virtual void OnFailedToConnectToPhoton(DisconnectCause cause)
//    {
//        Debug.LogError("Cause: " + cause);
//    }
//
//    public void OnJoinedRoom()
//    {
//        Debug.Log("OnJoinedRoom() called by PUN. Now this client is in a room. From here on, your game would be running. For reference, all callbacks are listed in enum: PhotonNetworkingMessage");
//    }
//
//    public void OnJoinedLobby()
//    {
//        Debug.Log("OnJoinedLobby(). Use a GUI to show existing rooms available in PhotonNetwork.GetRoomList().");
//    }
}