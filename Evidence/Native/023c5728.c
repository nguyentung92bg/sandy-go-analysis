/* IL2CPP: Dino.BusSand.App.UI.PaiziSign$$Swing
void Dino_BusSand_App_UI_PaiziSign__Swing (UnityEngine_Transform_o* root, bool restart, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PaiziSign$$Swing
   void Dino_BusSand_App_UI_PaiziSign__Swing (UnityEngine_Transform_o* root, bool restart, const
   MethodInfo* method); */

ulong Dino_BusSand_App_UI_PaiziSign__Swing_22c5728(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c352 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0250);
    bRam0000000004f9c352 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
  lVar7 = 0;
  if ((uVar4 & 1) != 0) {
    if (param_1 == 0) goto LAB_023c58c8;
    lVar7 = UnityEngine_Component__GetComponent_object__26f97e8
                      (param_1,*(undefined8 *)PTR_DAT_04cada30);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
  if ((uVar4 & 1) == 0) {
    if ((lVar7 == 0) || (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0), lVar5 == 0)
       ) {
LAB_023c58c8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar4 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar5,0);
    if (((uVar4 & 1) != 0) &&
       ((uVar4 = UnityEngine_Animation__get_isPlaying_4334c44(lVar7,0), puVar2 = PTR_DAT_04cb0250,
        (uVar4 & 1) == 0 || ((param_2 & 1) != 0)))) {
      uVar6 = UnityEngine_Animation__get_Item_4334ee8(lVar7,*(undefined8 *)PTR_DAT_04cb0250,0);
      uVar4 = UnityEngine_TrackedReference__op_Inequality_43c6a68(uVar6,0,0);
      if ((uVar4 & 1) != 0) {
        UnityEngine_Animation__Stop_4334660(lVar7,0);
        lVar5 = *(long *)puVar2;
        if ((bRam0000000004fa4be8 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf5b88,lVar5,0);
          FUN_02132f7c(PTR_DAT_04cf5680);
          FUN_02132f7c(PTR_DAT_04cd5630);
          bRam0000000004fa4be8 = 1;
        }
        uStack_50 = 0;
        uStack_48 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        if (lVar7 != 0) {
          lVar8 = *(long *)(lVar7 + 0x10);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
          }
          if (lVar5 == 0) {
            uStack_60 = 0;
            uStack_58 = 0;
          }
          else if (*(int *)(lVar5 + 0x10) == 0) {
            uVar6 = System_UIntPtr__op_Explicit_488617c(1,0);
            uVar6 = System_UIntPtr__op_Explicit_4886184(uVar6,0);
            uStack_40 = 0;
            uStack_38 = 0;
            UnityEngine_Bindings_ManagedSpanWrapper___ctor_43c6140(&uStack_40,uVar6,0,0);
            uStack_58 = uStack_38;
            uStack_60 = uStack_40;
          }
          else {
            if (cRam0000000004fa1b52 == '\0') {
              FUN_02132f7c(PTR_DAT_04cc73d8);
              cRam0000000004fa1b52 = '\x01';
            }
            uStack_50 = System_String__GetRawStringData_46cfab8(lVar5,0);
            uStack_48 = (ulong)*(uint *)(lVar5 + 0x10);
            uVar6 = System_ReadOnlySpan_char___GetPinnableReference_2de139c
                              (&uStack_50,*(undefined8 *)PTR_DAT_04cf5680);
            UnityEngine_Bindings_ManagedSpanWrapper___ctor_43c6140
                      (&uStack_60,uVar6,uStack_48 & 0xffffffff,0);
          }
          if (pcRam0000000004fa4c70 == (code *)0x0) {
            pcRam0000000004fa4c70 = (code *)FUN_02132f40(&UNK_00e4a687);
          }
          uVar3 = (*pcRam0000000004fa4c70)(lVar8,&uStack_60,0);
          return (ulong)(uVar3 & 1);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar6 = UnityEngine_Animation__get_clip_43341a8(lVar7,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
      if ((uVar4 & 1) != 0) {
        if ((bRam0000000004fa4be7 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf5b88);
          bRam0000000004fa4be7 = 1;
        }
        if (lVar7 != 0) {
          lVar5 = *(long *)(lVar7 + 0x10);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
          }
          if (pcRam0000000004fa4c68 == (code *)0x0) {
            pcRam0000000004fa4c68 = (code *)FUN_02132f40(&UNK_00e31580);
          }
                    /* WARNING: Could not recover jumptable at 0x04435118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (*pcRam0000000004fa4c68)(lVar5,0);
          return uVar4;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
  return uVar4;
}

