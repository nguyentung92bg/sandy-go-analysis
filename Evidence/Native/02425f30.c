/* IL2CPP: Dino.BusSand.App.UI.RewardPopup.<>c__DisplayClass15_0$$<Finish>b__1
void Dino_BusSand_App_UI_RewardPopup___c__DisplayClass15_0___Finish_b__1 (Dino_BusSand_App_UI_RewardPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.RewardPopup.<>c__DisplayClass15_0$$<Finish>b__1
   void Dino_BusSand_App_UI_RewardPopup___c__DisplayClass15_0___Finish_b__1
   (Dino_BusSand_App_UI_RewardPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_RewardPopup___c__DisplayClass15_0___Finish_b__1_2325f30(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000004f9c5e2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
                    /* try { // try from 02425f58 to 02525f5b has its CatchHandler @ 02425f74 */
                    /* try { // try from 02425f5c to 02525f97 has its CatchHandler @ 02425ae8 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02425e8c with catch @ 02425f60
                        */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02425e98 with catch @ 02425f64
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02425e6c with catch @ 02425f68
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02425e78 with catch @ 02425f6c
                        */
    FUN_02132f7c(PTR_DAT_04cac1e8);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02425eb0 with catch @ 02425f70
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02425f58 with catch @ 02425f74
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02425e48 with catch @ 02425f78
                        */
    FUN_02132f7c(PTR_DAT_04cb8ce0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02425e38 with catch @ 02425f7c
                        */
    bRam0000000004f9c5e2 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38);
                    /* try { // try from 02425f98 to 02525f9b has its CatchHandler @ 02425fbc */
                    /* try { // try from 02425f9c to 02525fbf has its CatchHandler @ 02425ae8 */
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
                    /* catch() { ... } // from try @ 02425f98 with catch @ 02425fbc */
                    /* try { // try from 02425fc0 to 02525fc7 has its CatchHandler @ 02425fd0 */
                    /* try { // try from 02425fc8 to 02525fd3 has its CatchHandler @ 02425ae8 */
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x38), lVar3 == 0)) goto LAB_02426074;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02425fc0 with catch @ 02425fd0
                        */
      Dino_BusSand_App_UI_KitTopBar__Release_2283cb8(lVar3,0x1fffffffffffffff,0);
    }
    puVar1 = PTR_DAT_04cac1e8;
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 == 0) {
      lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(lVar3,param_1,*(undefined8 *)PTR_DAT_04cb8ce0,0);
      *(long *)(param_1 + 0x20) = lVar3;
      thunk_FUN_02134474((long *)(param_1 + 0x20),lVar3);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar3 = Dino_BusSand_App_Tween__Delayed_2161264(0x3e800000,lVar3,0);
    if ((lVar3 != 0) && (lVar3 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar3,1,0), lVar3 != 0)
       ) {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(lVar3 + 0x18) = uVar4;
      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x18),uVar4,0);
      return lVar3;
    }
  }
LAB_02426074:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

