/* IL2CPP: Dino.BusSand.App.Meta.Feedback.<Post>d__5$$MoveNext
bool Dino_BusSand_App_Meta_Feedback__Post_d__5__MoveNext (Dino_BusSand_App_Meta_Feedback__Post_d__5_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Feedback.<Post>d__5$$MoveNext
   bool Dino_BusSand_App_Meta_Feedback__Post_d__5__MoveNext
   (Dino_BusSand_App_Meta_Feedback__Post_d__5_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_Feedback__Post_d__5__MoveNext_2210864(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_3c [4];
  undefined8 uStack_38;
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = param_1;
  if ((bRam0000000004f9bd3d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cb2318);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb2320);
    FUN_02132f7c(PTR_DAT_04cb2328);
    FUN_02132f7c(PTR_DAT_04cb2330);
    FUN_02132f7c(PTR_DAT_04cb2338);
    FUN_02132f7c(PTR_DAT_04caba30);
    FUN_02132f7c(PTR_DAT_04cb2340);
    bRam0000000004f9bd3d = 1;
  }
  puVar2 = PTR_DAT_04cb2320;
  puVar1 = PTR_DAT_04ca9c20;
  plStack_30 = &lStack_28;
  uStack_38 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    plVar5 = (long *)FUN_02133068(*(undefined8 *)puVar1,2);
    puVar1 = PTR_DAT_04caba30;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((*(long *)PTR_DAT_04caba30 != 0) &&
       (lVar7 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04caba30,*(undefined8 *)(*plVar5 + 0x40)),
       lVar7 == 0)) {
      uVar4 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar4,0);
    }
    if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar5[4] = *(long *)puVar1;
    thunk_FUN_02134474();
    if (*(long *)(lStack_28 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar3 = UnityEngine_Networking_UnityWebRequest__get_result_46b193c
                      (*(long *)(lStack_28 + 0x30),0);
    uVar4 = *(undefined8 *)PTR_DAT_04cb2338;
    if (iVar3 == 1) {
      auStack_3c[0] = true;
    }
    else {
      if (*(long *)(lStack_28 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar7 = UnityEngine_Networking_UnityWebRequest__get_responseCode_46b198c
                        (*(long *)(lStack_28 + 0x30),0);
      auStack_3c[0] = lVar7 == 0x12e;
    }
    lVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x28),auStack_3c);
    if ((lVar7 != 0) &&
       (lVar6 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
      uVar4 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar4,0);
    }
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar5[5] = lVar7;
    thunk_FUN_02134474(plVar5 + 5,lVar7);
    if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Analytics__Log_216d0c8(uVar4,plVar5,0);
    Dino_BusSand_App_Meta_Feedback__Post_d__5____m__Finally1_2210ca0(lStack_28);
    *(undefined8 *)(lStack_28 + 0x30) = 0;
    thunk_FUN_02134474((undefined8 *)(lStack_28 + 0x30),0);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    UnityEngine_Networking_UnityWebRequest___ctor_46b0840
              (uVar4,uVar8,*(undefined8 *)PTR_DAT_04cb2330,0);
    *(undefined8 *)(lStack_28 + 0x30) = uVar4;
    thunk_FUN_02134474((undefined8 *)(lStack_28 + 0x30),uVar4);
    lVar7 = *(long *)(lStack_28 + 0x30);
    *(undefined4 *)(lStack_28 + 0x10) = 0xfffffffd;
    plVar5 = (long *)System_Text_Encoding__get_UTF8_46eb380(0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar4 = (**(code **)(*plVar5 + 0x248))
                      (plVar5,*(undefined8 *)(lStack_28 + 0x28),*(undefined8 *)(*plVar5 + 0x250));
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2328);
    UnityEngine_Networking_UploadHandlerRaw___ctor_46b319c(lVar6,uVar4,0);
    if ((lVar6 == 0) ||
       (UnityEngine_Networking_UploadHandler__set_contentType_46b2f50
                  (lVar6,*(undefined8 *)PTR_DAT_04cb2340,0), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Networking_UnityWebRequest__set_uploadHandler_46b0c30(lVar7,lVar6,0);
    lVar7 = *(long *)(lStack_28 + 0x30);
    uVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2318);
    UnityEngine_Networking_DownloadHandlerBuffer___ctor_46b0000(uVar4,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Networking_UnityWebRequest__set_downloadHandler_46b0b68(lVar7,uVar4,0);
    if (*(long *)(lStack_28 + 0x30) != 0) {
      UnityEngine_Networking_UnityWebRequest__set_redirectLimit_46b1fb4
                (*(long *)(lStack_28 + 0x30),0,0);
      if (*(long *)(lStack_28 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      UnityEngine_Networking_UnityWebRequest__set_timeout_46b2b54(*(long *)(lStack_28 + 0x30),0xf,0)
      ;
      if (*(long *)(lStack_28 + 0x30) != 0) {
        uVar4 = UnityEngine_Networking_UnityWebRequest__SendWebRequest_46b10a0
                          (*(long *)(lStack_28 + 0x30),0);
        *(undefined8 *)(lStack_28 + 0x18) = uVar4;
        thunk_FUN_02134474();
        *(undefined4 *)(lStack_28 + 0x10) = 1;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return 0;
}

