/* IL2CPP: Dino.BusSand.App.UI.MechanicGuide.<WaitClosed>d__11$$MoveNext
bool Dino_BusSand_App_UI_MechanicGuide__WaitClosed_d__11__MoveNext (Dino_BusSand_App_UI_MechanicGuide__WaitClosed_d__11_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MechanicGuide.<WaitClosed>d__11$$MoveNext
   bool Dino_BusSand_App_UI_MechanicGuide__WaitClosed_d__11__MoveNext
   (Dino_BusSand_App_UI_MechanicGuide__WaitClosed_d__11_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_MechanicGuide__WaitClosed_d__11__MoveNext_21fbe9c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000004f9bc66 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc66 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(uint *)(param_1 + 0x10) < 2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        if (*(char *)(*(long *)(param_1 + 0x28) + 0x2c) != '\0') {
          return 0;
        }
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != 0) {
          uVar2 = (**(code **)(lVar3 + 0x18))
                            (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
          if ((uVar2 & 1) != 0) {
            *(undefined8 *)(param_1 + 0x18) = 0;
            thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
            *(undefined4 *)(param_1 + 0x10) = 1;
            return 1;
          }
          if (*(long *)(param_1 + 0x28) != 0) {
            Dino_BusSand_App_UI_UIPanel__Close_21f509c();
            return 0;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return 0;
}

