/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController.<StartWhenIntroDone>d__100$$MoveNext
bool Dino_BusSand_App_Gameplay_GameplayController__StartWhenIntroDone_d__100__MoveNext (Dino_BusSand_App_Gameplay_GameplayController__StartWhenIntroDone_d__100_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController.<StartWhenIntroDone>d__100$$MoveNext
   bool Dino_BusSand_App_Gameplay_GameplayController__StartWhenIntroDone_d__100__MoveNext
   (Dino_BusSand_App_Gameplay_GameplayController__StartWhenIntroDone_d__100_o* __this, const
   MethodInfo* method); */

undefined8
Dino_BusSand_App_Gameplay_GameplayController__StartWhenIntroDone_d__100__MoveNext_22a0610
          (long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  
  if ((bRam0000000004f9c259 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c259 = 1;
  }
  if (*(uint *)(param_1 + 0x10) < 2) {
    lVar4 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) {
LAB_023a0704:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = *(undefined8 *)(lVar4 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar1 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(lVar4 + 0x38) == 0) goto LAB_023a0704;
      uVar1 = Dino_BusSand_View_GameView__get_IntroPlaying_239a200(*(long *)(lVar4 + 0x38),0);
      if ((uVar1 & 1) != 0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
    }
    uVar5 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
    *(undefined4 *)(lVar4 + 0x5c) = uVar5;
    if (*(int *)(lVar4 + 0x20) != 2) {
      lVar2 = *(long *)(lVar4 + 0x70);
      *(undefined4 *)(lVar4 + 0x20) = 2;
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),2,*(undefined8 *)(lVar2 + 0x28));
      }
    }
  }
  return 0;
}

