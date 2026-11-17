/* IL2CPP: Dino.BusSand.App.UI.UiMotion.<>c__DisplayClass30_0$$<Count>b__2
void Dino_BusSand_App_UI_UiMotion___c__DisplayClass30_0___Count_b__2 (Dino_BusSand_App_UI_UiMotion___c__DisplayClass30_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiMotion.<>c__DisplayClass30_0$$<Count>b__2
   void Dino_BusSand_App_UI_UiMotion___c__DisplayClass30_0___Count_b__2
   (Dino_BusSand_App_UI_UiMotion___c__DisplayClass30_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_UiMotion___c__DisplayClass30_0___Count_b__2_22a1c2c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c262 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c262 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 != 0) {
      plVar5 = *(long **)(param_1 + 0x10);
      uVar4 = (**(code **)(lVar3 + 0x18))
                        (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(param_1 + 0x20),
                         *(undefined8 *)(lVar3 + 0x28));
      if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x023a1cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x518))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x520));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return;
}

