/* IL2CPP: Dino.Tracking.ServerTrackingAutoRouter$$set_UseServerPreference
void Dino_Tracking_ServerTrackingAutoRouter__set_UseServerPreference (bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingAutoRouter$$set_UseServerPreference
   void Dino_Tracking_ServerTrackingAutoRouter__set_UseServerPreference (bool value, const
   MethodInfo* method); */

void Dino_Tracking_ServerTrackingAutoRouter__set_UseServerPreference_2460560(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_34 [4];
  
  puVar1 = PTR_DAT_04cc09b0;
  if ((bRam0000000004f9ce1f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc09c0);
    FUN_02132f7c(PTR_DAT_04cc09b0);
    bRam0000000004f9ce1f = 1;
  }
  uVar2 = *(undefined8 *)puVar1;
  if ((param_1 & 1) == 0) {
    uVar3 = Dino_Common_SaveLoadLocalDevice__IsValidKey_2447330(uVar2,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    UnityEngine_PlayerPrefs__DeleteKey_43b5c98(uVar2,0);
    if (pcRam0000000004fa80e0 == (code *)0x0) {
      pcRam0000000004fa80e0 = (code *)FUN_02132f40(&UNK_00e3264a);
    }
                    /* WARNING: Could not recover jumptable at 0x044b5e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fa80e0)();
    return;
  }
  lVar8 = *(long *)PTR_DAT_04cc09c0;
  if (*(long *)(lVar8 + 0x38) == 0) {
    FUN_0216b4cc(lVar8);
  }
  uVar3 = Dino_Common_SaveLoadLocalDevice__IsValidKey_2447330(uVar2,0);
  puVar1 = PTR_DAT_04ca9ac8;
  if ((uVar3 & 1) != 0) {
    uVar9 = **(undefined8 **)(lVar8 + 0x38);
    if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = System_Type__GetTypeFromHandle_483f0b4(uVar9,0);
    lVar10 = *(long *)(puVar1 + 0x48);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(puVar1 + 0xe0));
    }
    uVar4 = System_Type__GetTypeFromHandle_483f0b4(lVar10 + 0x20,0);
    uVar3 = System_Type__op_Equality_4847b28(uVar9,uVar4,0);
    if ((uVar3 & 1) == 0) {
      lVar10 = *(long *)(puVar1 + 0x78);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = System_Type__GetTypeFromHandle_483f0b4(lVar10 + 0x20,0);
      uVar3 = System_Type__op_Equality_4847b28(uVar9,uVar4,0);
      if ((uVar3 & 1) == 0) {
        lVar10 = *(long *)(puVar1 + 0x28);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = System_Type__GetTypeFromHandle_483f0b4(lVar10 + 0x20,0);
        uVar3 = System_Type__op_Equality_4847b28(uVar9,uVar4,0);
        if ((uVar3 & 1) == 0) {
          lVar10 = *(long *)(puVar1 + 0x90);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar4 = System_Type__GetTypeFromHandle_483f0b4(lVar10 + 0x20,0);
          uVar3 = System_Type__op_Equality_4847b28(uVar9,uVar4,0);
          if ((uVar3 & 1) == 0) {
            Dino_Common_SaveLoadLocalDevice__LogUnsupportedType_bool__28a93e4
                      (*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x10));
            return;
          }
          auStack_34[0] = 1;
          plVar5 = (long *)FUN_02133100(*(undefined8 *)(*(long *)(lVar8 + 0x38) + 8),auStack_34);
          if (plVar5 == (long *)0x0) {
            plVar5 = (long *)**(long **)(*(long *)(puVar1 + 0x90) + 0xb8);
          }
          else if (*plVar5 != *(long *)(puVar1 + 0x90)) {
                    /* WARNING: Subroutine does not return */
            FUN_021335a4(plVar5);
          }
          UnityEngine_PlayerPrefs__SetString_43b5744(uVar2,plVar5,0);
        }
        else {
          auStack_34[0] = 1;
          plVar5 = (long *)FUN_02133100(*(undefined8 *)(*(long *)(lVar8 + 0x38) + 8),auStack_34);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(puVar1 + 0x28) + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_021335a4();
          }
          puVar7 = (undefined1 *)thunk_FUN_0216e9e4();
          UnityEngine_PlayerPrefs__SetInt_43b5300(uVar2,*puVar7,0);
        }
      }
      else {
        auStack_34[0] = 1;
        plVar5 = (long *)FUN_02133100(*(undefined8 *)(*(long *)(lVar8 + 0x38) + 8),auStack_34);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(puVar1 + 0x78) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4();
        }
        puVar6 = (undefined4 *)thunk_FUN_0216e9e4();
        UnityEngine_PlayerPrefs__SetFloat_43b551c(*puVar6,uVar2,0);
      }
    }
    else {
      auStack_34[0] = 1;
      plVar5 = (long *)FUN_02133100(*(undefined8 *)(*(long *)(lVar8 + 0x38) + 8),auStack_34);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(puVar1 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4();
      }
      puVar6 = (undefined4 *)thunk_FUN_0216e9e4();
      UnityEngine_PlayerPrefs__SetInt_43b5300(uVar2,*puVar6,0);
    }
    UnityEngine_PlayerPrefs__Save_43b5e3c(0);
  }
  return;
}

