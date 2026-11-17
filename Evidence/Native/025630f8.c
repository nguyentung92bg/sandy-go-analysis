/* IL2CPP: Dino.Tracking.ServerTrackingProvider.<SendBatchAsync>d__32$$MoveNext
void Dino_Tracking_ServerTrackingProvider__SendBatchAsync_d__32__MoveNext (Dino_Tracking_ServerTrackingProvider__SendBatchAsync_d__32_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingProvider.<SendBatchAsync>d__32$$MoveNext
   void Dino_Tracking_ServerTrackingProvider__SendBatchAsync_d__32__MoveNext
   (Dino_Tracking_ServerTrackingProvider__SendBatchAsync_d__32_o __this, const MethodInfo* method);
    */

void Dino_Tracking_ServerTrackingProvider__SendBatchAsync_d__32__MoveNext_24630f8(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  undefined8 uStack_a0;
  long lStack_98;
  int *piStack_90;
  long *plStack_88;
  long lStack_80;
  int *piStack_78;
  int **ppiStack_70;
  undefined8 auStack_68 [2];
  int iStack_58;
  undefined1 auStack_50 [16];
  long lStack_38;
  int iStack_2c;
  int *piStack_28;
  
  piStack_28 = param_1;
  if ((bRam0000000004f9ce3c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc0ab8);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cb2318);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cb2320);
    FUN_02132f7c(PTR_DAT_04cb2328);
    FUN_02132f7c(PTR_DAT_04cb2330);
    FUN_02132f7c(PTR_DAT_04cc0ac0);
    FUN_02132f7c(PTR_DAT_04cc0ac8);
    FUN_02132f7c(PTR_DAT_04cc0ad0);
    FUN_02132f7c(PTR_DAT_04cc0ad8);
    FUN_02132f7c(PTR_DAT_04cc0ae0);
    bRam0000000004f9ce3c = 1;
  }
  iStack_2c = *param_1;
  lStack_38 = *(long *)(param_1 + 8);
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  iStack_58 = 0;
  if (iStack_2c == 0) {
LAB_025633c0:
    ppiStack_70 = &piStack_28;
    lStack_80 = 0;
    piStack_78 = &iStack_2c;
LAB_025633d0:
    plStack_88 = &lStack_38;
    piStack_90 = &iStack_2c;
    lStack_98 = 0;
    iStack_2c = -1;
    auStack_50 = *(undefined1 (*) [16])(piStack_28 + 0xc);
    piStack_28[0xc] = 0;
    piStack_28[0xd] = 0;
    piStack_28[0xe] = 0;
    piStack_28[0xf] = 0;
    *piStack_28 = -1;
  }
  else {
    if (*(long *)(param_1 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = System_String__TrimEnd_46d71ec(*(long *)(param_1 + 4),0x2f,0);
    uVar2 = System_String__Concat_46c82e0(uVar2,*(undefined8 *)PTR_DAT_04cc0ac0,0);
    uVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2320);
    UnityEngine_Networking_UnityWebRequest___ctor_46b0840
              (uVar3,uVar2,*(undefined8 *)PTR_DAT_04cb2330,0);
    *(undefined8 *)(piStack_28 + 10) = uVar3;
    thunk_FUN_02134474(piStack_28 + 10,uVar3);
    piStack_78 = &iStack_2c;
    lStack_80 = 0;
    ppiStack_70 = &piStack_28;
    if (iStack_2c == 0) goto LAB_025633c0;
    plVar4 = (long *)System_Text_Encoding__get_UTF8_46eb380(0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = (**(code **)(*plVar4 + 0x248))
                      (plVar4,*(undefined8 *)(piStack_28 + 6),*(undefined8 *)(*plVar4 + 0x250));
    lVar9 = *(long *)(piStack_28 + 10);
    lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2328);
    UnityEngine_Networking_UploadHandlerRaw___ctor_46b319c(lVar5,uVar2,0);
    if ((lVar5 == 0) ||
       (UnityEngine_Networking_UploadHandler__set_contentType_46b2f50
                  (lVar5,*(undefined8 *)PTR_DAT_04cc0ad8,0), lVar9 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Networking_UnityWebRequest__set_uploadHandler_46b0c30(lVar9,lVar5,0);
    lVar5 = *(long *)(piStack_28 + 10);
    uVar2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2318);
    UnityEngine_Networking_DownloadHandlerBuffer___ctor_46b0000(uVar2,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Networking_UnityWebRequest__set_downloadHandler_46b0b68(lVar5,uVar2,0);
    if (*(long *)(piStack_28 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Networking_UnityWebRequest__set_timeout_46b2b54(*(long *)(piStack_28 + 10),10,0);
    piStack_90 = &iStack_2c;
    lStack_98 = 0;
    plStack_88 = &lStack_38;
    if (iStack_2c == 0) goto LAB_025633d0;
    if (*(long *)(piStack_28 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = UnityEngine_Networking_UnityWebRequest__SendWebRequest_46b10a0
                      (*(long *)(piStack_28 + 10),0);
    auStack_50 = Cysharp_Threading_Tasks_UnityAsyncExtensions__GetAwaiter_4079f88(uVar2,0);
    uVar6 = Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter__get_IsCompleted_407a034
                      (auStack_50,0);
    if ((uVar6 & 1) == 0) {
      iStack_2c = 0;
      *piStack_28 = 0;
      *(undefined1 (*) [16])(piStack_28 + 0xc) = auStack_50;
      thunk_FUN_02134474(piStack_28 + 0xc,0);
      FUN_02563f24(piStack_28 + 2,auStack_50,piStack_28,*(undefined8 *)PTR_DAT_04cc0ab8);
      iVar1 = 6;
      goto LAB_02563538;
    }
  }
  Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter__GetResult_407a04c
            (auStack_50,0);
  if (*(long *)(piStack_28 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar1 = UnityEngine_Networking_UnityWebRequest__get_result_46b193c(*(long *)(piStack_28 + 10),0);
  lVar5 = lStack_38;
  lVar9 = *(long *)(piStack_28 + 10);
  if (iVar1 == 1) {
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uStack_a0 = UnityEngine_Networking_UnityWebRequest__get_responseCode_46b198c(lVar9,0);
    uVar2 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),&uStack_a0);
    uVar2 = System_String__Format_46c8eb8(*(undefined8 *)PTR_DAT_04cc0ac8,uVar2,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    *(undefined8 *)(lVar5 + 0x38) = uVar2;
    thunk_FUN_02134474((undefined8 *)(lVar5 + 0x38));
  }
  else {
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uStack_a0 = UnityEngine_Networking_UnityWebRequest__get_responseCode_46b198c(lVar9,0);
    uVar2 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),&uStack_a0);
    if (*(long *)(piStack_28 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = UnityEngine_Networking_UnityWebRequest__get_error_46b187c(*(long *)(piStack_28 + 10),0);
    uVar2 = System_String__Format_46d34e8(*(undefined8 *)PTR_DAT_04cc0ad0,uVar2,uVar3,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    *(undefined8 *)(lVar5 + 0x38) = uVar2;
    thunk_FUN_02134474((undefined8 *)(lVar5 + 0x38));
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = System_String__Concat_46c82e0
                      (*(undefined8 *)PTR_DAT_04cc0ae0,*(undefined8 *)(lStack_38 + 0x38),0);
    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Debug__LogWarning_4357a30(uVar2,0);
  }
  iVar1 = 0xb;
LAB_02563538:
  if (*piStack_90 < 0) {
    lVar5 = *plStack_88;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    *(undefined1 *)(lVar5 + 0x28) = 0;
    if (*(char *)(lVar5 + 0x29) != '\0') {
      *(undefined1 *)(lVar5 + 0x29) = 0;
      Dino_Tracking_ServerTrackingProvider__FlushNow_2462ae0();
    }
  }
  if (lStack_98 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0213321c();
  }
  if ((iVar1 == 0xb) || (iVar1 == 0)) {
    iVar1 = 0xc;
  }
  if ((*piStack_78 < 0) && (plVar4 = *(long **)(*ppiStack_70 + 10), plVar4 != (long *)0x0)) {
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04ca9b30) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_025635ec;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_0216b7a4(plVar4,*(long *)PTR_DAT_04ca9b30,0);
LAB_025635ec:
    (*(code *)*puVar7)(plVar4,puVar7[1]);
  }
  if (lStack_80 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0213321c();
  }
  if (iVar1 == 0xc) {
    *piStack_28 = -2;
    piVar8 = piStack_28 + 10;
    piVar8[0] = 0;
    piVar8[1] = 0;
    thunk_FUN_02134474(piVar8,0);
    FUN_02247558(piStack_28 + 2,0);
  }
  else if (iVar1 == 0) {
    uVar2 = auStack_68[iStack_58 + -1];
    *piStack_28 = -2;
    piVar8 = piStack_28 + 10;
    piVar8[0] = 0;
    piVar8[1] = 0;
    thunk_FUN_02134474(piVar8,0);
    FUN_02247438(piStack_28 + 2,uVar2,0);
  }
  return;
}

