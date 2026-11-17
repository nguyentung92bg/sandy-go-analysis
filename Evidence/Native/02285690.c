/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow.<WaitClosed>d__12$$MoveNext
bool Dino_BusSand_App_UI_LevelEnterFlow__WaitClosed_d__12__MoveNext (Dino_BusSand_App_UI_LevelEnterFlow__WaitClosed_d__12_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow.<WaitClosed>d__12$$MoveNext
   bool Dino_BusSand_App_UI_LevelEnterFlow__WaitClosed_d__12__MoveNext
   (Dino_BusSand_App_UI_LevelEnterFlow__WaitClosed_d__12_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_LevelEnterFlow__WaitClosed_d__12__MoveNext_2185690(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((bRam0000000004f9b952 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacb20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b952 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (*(uint *)(param_1 + 0x10) < 2) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
LAB_0228578c:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(char *)(*(long *)(param_1 + 0x30) + 0x2c) == '\0') {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        uVar1 = *(undefined4 *)(param_1 + 0x28);
        if (*(int *)(*(long *)PTR_DAT_04cacb20 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = Dino_BusSand_App_UI_LevelEnterFlow__Alive_233d020(uVar4,uVar1,0);
        if ((uVar3 & 1) != 0) {
          *(undefined8 *)(param_1 + 0x18) = 0;
          thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
          *(undefined4 *)(param_1 + 0x10) = 1;
          return 1;
        }
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_0228578c;
        Dino_BusSand_App_UI_UIPanel__Close_21f509c(*(long *)(param_1 + 0x30),0);
      }
    }
  }
  return 0;
}

