/* IL2CPP: Dino.BusSand.App.UI.PassportBuySucPanel$$Done
void Dino_BusSand_App_UI_PassportBuySucPanel__Done (Dino_BusSand_App_UI_PassportBuySucPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportBuySucPanel$$Done
   void Dino_BusSand_App_UI_PassportBuySucPanel__Done (Dino_BusSand_App_UI_PassportBuySucPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportBuySucPanel__Done_21cde88(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam0000000004f9bb2a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caf1a8);
    bRam0000000004f9bb2a = 1;
  }
  if (*(char *)(param_1 + 0x40) == '\0') {
    plVar2 = (long *)(param_1 + 0x38);
    lVar5 = *plVar2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cdf48 with catch @ 022cdeec
                        */
    *(undefined1 *)(param_1 + 0x40) = 1;
    *plVar2 = 0;
    thunk_FUN_02134474(plVar2,0);
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    puVar1 = PTR_DAT_04cad1b0;
                    /* try { // try from 022cdf1c to 023cdf23 has its CatchHandler @ 022cdfa0 */
    uVar4 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
                    /* try { // try from 022cdf38 to 023cdf47 has its CatchHandler @ 022cdf98 */
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 022cdf48 to 023cdfb3 has its CatchHandler @ 022cdeec */
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      if (cRam0000000004f9b94d == '\0') {
        FUN_02132f7c(PTR_DAT_04cad1b0);
        cRam0000000004f9b94d = '\x01';
      }
      if (**(long **)(*(long *)puVar1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cdfb4 with catch @ 022cdfbc
                        */
        FUN_02133224();
      }
      Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                (**(long **)(*(long *)puVar1 + 0xb8),*(undefined8 *)PTR_DAT_04caf1a8);
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cdf38 with catch @ 022cdf98
                        */
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    if (lVar5 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cdf1c with catch @ 022cdfa0
                        */
                    /* try { // try from 022cdfb4 to 023cdfb7 has its CatchHandler @ 022cdfbc */
                    /* WARNING: Could not recover jumptable at 0x022cdfb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      return;
    }
  }
  return;
}

