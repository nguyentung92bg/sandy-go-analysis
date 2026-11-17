/* IL2CPP: Dino.BusSand.View.GameView$$EndFever
void Dino_BusSand_View_GameView__EndFever (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$EndFever
   void Dino_BusSand_View_GameView__EndFever (Dino_BusSand_View_GameView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_GameView__EndFever_23a3288(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c93d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c93d = 1;
  }
  lVar2 = *(long *)puVar1;
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x60) = 0x3f800000;
  }
  lVar2 = *(long *)(param_1 + 0x68);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x024a3318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),0,*(undefined8 *)(lVar2 + 0x28));
    return;
  }
  return;
}

