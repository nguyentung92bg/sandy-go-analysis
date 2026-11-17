/* IL2CPP: Dino.BusSand.App.UI.KitPopup.<>c__DisplayClass26_0$$<Build>b__0
void Dino_BusSand_App_UI_KitPopup___c__DisplayClass26_0___Build_b__0 (Dino_BusSand_App_UI_KitPopup___c__DisplayClass26_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPopup.<>c__DisplayClass26_0$$<Build>b__0
   void Dino_BusSand_App_UI_KitPopup___c__DisplayClass26_0___Build_b__0
   (Dino_BusSand_App_UI_KitPopup___c__DisplayClass26_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_KitPopup___c__DisplayClass26_0___Build_b__0_2282ee4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 02382eec to 02482eef has its CatchHandler @ 02382efc */
                    /* try { // try from 02382ef0 to 02482f23 has its CatchHandler @ 023822a4 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02382eec with catch @ 02382efc
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02382d84 with catch @ 02382f00
                        */
  if ((bRam0000000004f9c14b & 1) == 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02382c00 with catch @ 02382f04
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02382d94 with catch @ 02382f08
                        */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c14b = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 02382f24 to 02482f27 has its CatchHandler @ 02382f50 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 02382f28 to 02482f53 has its CatchHandler @ 023822a4 */
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 02382f24 with catch @ 02382f50 */
                    /* try { // try from 02382f54 to 02482f5b has its CatchHandler @ 02382fac */
    return;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x10) + 0x2c) != '\0') {
      return;
    }
                    /* try { // try from 02382f5c to 02482f7b has its CatchHandler @ 023822a4 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02382c24 with catch @ 02382f60
                        */
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x48);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 02382f7c to 02482f7f has its CatchHandler @ 02382f98 */
                    /* try { // try from 02382f80 to 02482f9b has its CatchHandler @ 023822a4 */
      uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
      if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 02382f7c with catch @ 02382f98 */
        if ((*(long *)(param_1 + 0x18) == 0) ||
           (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x48), lVar4 == 0)) goto LAB_02382fc0;
                    /* try { // try from 02382f9c to 02482fa3 has its CatchHandler @ 02382fac */
        if (*(char *)(lVar4 + 0x48) == '\0') {
          return;
        }
      }
                    /* try { // try from 02382fa4 to 02482faf has its CatchHandler @ 023822a4 */
      plVar3 = *(long **)(param_1 + 0x10);
      if (plVar3 != (long *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02382f54 with catch @ 02382fac
                       catch(type#2 @ 00000000) { ... } // from try @ 02382f9c with catch @ 02382fac
                        */
                    /* WARNING: Could not recover jumptable at 0x02382fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
        return;
      }
    }
  }
LAB_02382fc0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

