/* IL2CPP: Dino.BusSand.App.UI.UIManagerEvents$$add_Closed
void Dino_BusSand_App_UI_UIManagerEvents__add_Closed (System_Action_UIPanel__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIManagerEvents$$add_Closed
   void Dino_BusSand_App_UI_UIManagerEvents__add_Closed (System_Action_UIPanel__o* value, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_UIManagerEvents__add_Closed_21ffd4c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_04cb1b68;
                    /* try { // try from 022ffd64 to 023ffd6b has its CatchHandler @ 022ffe44 */
  if ((bRam0000000004f9bc8a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacd28);
                    /* try { // try from 022ffd88 to 023ffd93 has its CatchHandler @ 022ffecc */
    FUN_02132f7c(PTR_DAT_04cb1b68);
    bRam0000000004f9bc8a = 1;
  }
  puVar1 = PTR_DAT_04cacd28;
                    /* try { // try from 022ffd94 to 023ffd9f has its CatchHandler @ 022ffe20 */
                    /* try { // try from 022ffda0 to 023ffdb7 has its CatchHandler @ 022ffdf4 */
  lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  do {
    lVar4 = System_Delegate__Combine_4872324(lVar6,param_1,0);
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      uVar7 = *(undefined8 *)puVar1;
      lVar5 = thunk_FUN_0216e7a0(lVar4,uVar7);
                    /* try { // try from 022ffdcc to 023ffdcf has its CatchHandler @ 022ffddc */
                    /* try { // try from 022ffdd0 to 023ffddb has its CatchHandler @ 022ffea4 */
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar4,uVar7);
      }
    }
                    /* catch() { ... } // from try @ 022ffdcc with catch @ 022ffddc
                       try { // try from 022ffddc to 023ffedf has its CatchHandler @ 022ffaa8 */
    lVar4 = FUN_0216aff4(*(long *)(*(long *)puVar2 + 0xb8) + 8,lVar5,lVar6);
    bVar3 = lVar4 != lVar6;
    lVar6 = lVar4;
                    /* catch() { ... } // from try @ 022ffda0 with catch @ 022ffdf4 */
  } while (bVar3);
                    /* catch() { ... } // from try @ 022ffc54 with catch @ 022ffe04 */
                    /* catch() { ... } // from try @ 022ffbf0 with catch @ 022ffe08 */
                    /* catch() { ... } // from try @ 022ffd14 with catch @ 022ffe0c */
  return;
}

