/* IL2CPP: Dino.BusSand.App.GameApp$$OnLateUpdateAnswer
void Dino_BusSand_App_GameApp__OnLateUpdateAnswer (Dino_BusSand_App_GameApp_o* __this, int32_t r, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$OnLateUpdateAnswer
   void Dino_BusSand_App_GameApp__OnLateUpdateAnswer (Dino_BusSand_App_GameApp_o* __this, int32_t r,
   const MethodInfo* method); */

void Dino_BusSand_App_GameApp__OnLateUpdateAnswer_2165aa8(long param_1,int param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b85d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac570);
    FUN_02132f7c(PTR_DAT_04cac578);
    FUN_02132f7c(PTR_DAT_04cac580);
    FUN_02132f7c(PTR_DAT_04cac588);
    FUN_02132f7c(PTR_DAT_04cac590);
    FUN_02132f7c(PTR_DAT_04cac598);
    bRam0000000004f9b85d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
    if ((uVar2 & 1) == 0) {
      if (param_2 == 1) {
        lVar4 = Dino_BusSand_App_GameApp__OfferSoftUpdate_2165ca0(param_1);
        if (lVar4 == 0) {
          thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
          uVar3 = thunk_FUN_0216e89c();
          uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
          System_NullReferenceException___ctor_483267c(uVar3,uVar6,0);
        }
        else {
          uVar2 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
          if ((uVar2 & 1) != 0) {
            if ((bRam0000000004fa84ef & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf7890);
              bRam0000000004fa84ef = 1;
            }
            if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar5 = *(long *)(param_1 + 0x10);
            if (lVar5 != 0) {
              if (pcRam0000000004fa8560 == (code *)0x0) {
                pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
              }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000004fa8560)(lVar5,lVar4);
              return;
            }
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
          }
          thunk_FUN_021985a8(PTR_DAT_04caa3a8);
          uVar3 = thunk_FUN_0216e89c();
          uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
          System_ArgumentException___ctor_47b660c(uVar3,uVar6,0);
        }
        uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar3,uVar6);
      }
      if (param_2 == 2) {
        if (*(long *)(param_1 + 0x28) != 0) {
          Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                    (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac578);
          if (*(long *)(param_1 + 0x28) != 0) {
            Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                      (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac580);
            if (*(char *)(param_1 + 0x38) != '\0') {
              uVar6 = *(undefined8 *)(param_1 + 0x20);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
              if ((uVar2 & 1) != 0) {
                if (*(long *)(param_1 + 0x20) == 0) goto LAB_02265c9c;
                Dino_BusSand_App_Gameplay_GameplayController__SetPaused_229dda8
                          (*(long *)(param_1 + 0x20),1,*(undefined8 *)PTR_DAT_04cac590,0);
                if (*(long *)(param_1 + 0x20) == 0) goto LAB_02265c9c;
                Dino_BusSand_App_Gameplay_GameplayController__LockInput_229dd28
                          (*(long *)(param_1 + 0x20),1,0);
              }
            }
            lVar4 = *(long *)(param_1 + 0x28);
            uStack_24 = 2;
            uVar6 = FUN_02133100(*(undefined8 *)PTR_DAT_04cac570,&uStack_24);
            if (lVar4 != 0) {
              Dino_BusSand_App_UI_UIManager__Open_object__2945314
                        (lVar4,*(undefined8 *)PTR_DAT_04cac598,5,uVar6,
                         *(undefined8 *)PTR_DAT_04cac588);
              return;
            }
          }
        }
LAB_02265c9c:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
  return;
}

