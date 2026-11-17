/* IL2CPP: Dino.BusSand.App.GameApp$$LeaveHall
void Dino_BusSand_App_GameApp__LeaveHall (Dino_BusSand_App_GameApp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$LeaveHall
   void Dino_BusSand_App_GameApp__LeaveHall (Dino_BusSand_App_GameApp_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_App_GameApp__LeaveHall_2169b6c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam0000000004f9b876 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac860);
    FUN_02132f7c(PTR_DAT_04cac6e8);
    bRam0000000004f9b876 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x88);
  *(undefined1 *)(param_1 + 0x39) = 0;
  if (lVar3 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,lVar3,0);
    *(undefined8 *)(param_1 + 0x88) = 0;
    thunk_FUN_02134474((long *)(param_1 + 0x88),0);
  }
  lVar3 = *(long *)(param_1 + 0x80);
  if (lVar3 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,lVar3,0);
    *(undefined8 *)(param_1 + 0x80) = 0;
    thunk_FUN_02134474((long *)(param_1 + 0x80),0);
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(long *)(param_1 + 0x28) != 0) {
    Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
              (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac6e8);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_02269cc4;
      Dino_BusSand_App_UI_HallScene__Hide_22d2b64(*(long *)(param_1 + 0x30),0);
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac860);
      uVar4 = *(undefined8 *)(param_1 + 0x90);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = *(long *)(param_1 + 0x90);
      if (lVar3 != 0) {
        if ((bRam0000000004fa82e3 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7608,0,0);
          bRam0000000004fa82e3 = 1;
        }
        if (lVar3 != 0) {
          lVar5 = *(long *)(lVar3 + 0x10);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
          }
          if (pcRam0000000004fa82f0 == (code *)0x0) {
            pcRam0000000004fa82f0 = (code *)FUN_02132f40(&UNK_00e4d81f);
          }
                    /* WARNING: Could not recover jumptable at 0x044bc584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa82f0)(lVar5,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
LAB_02269cc4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

