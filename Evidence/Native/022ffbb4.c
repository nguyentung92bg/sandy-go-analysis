/* IL2CPP: Dino.BusSand.App.UI.UIManagerEvents$$add_Opened
void Dino_BusSand_App_UI_UIManagerEvents__add_Opened (System_Action_UIPanel__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIManagerEvents$$add_Opened
   void Dino_BusSand_App_UI_UIManagerEvents__add_Opened (System_Action_UIPanel__o* value, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_UIManagerEvents__add_Opened_21ffbb4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_04cb1b68;
                    /* try { // try from 022ffbd4 to 023ffbe7 has its CatchHandler @ 022ffe38 */
  if ((bRam0000000004f9bc88 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacd28);
                    /* try { // try from 022ffbf0 to 023ffbf7 has its CatchHandler @ 022ffe08 */
    FUN_02132f7c(PTR_DAT_04cb1b68);
    bRam0000000004f9bc88 = 1;
  }
  puVar1 = PTR_DAT_04cacd28;
                    /* try { // try from 022ffc08 to 023ffc2f has its CatchHandler @ 022ffecc */
  lVar6 = **(long **)(*(long *)puVar2 + 0xb8);
  do {
    lVar4 = System_Delegate__Combine_4872324(lVar6,param_1,0);
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      uVar7 = *(undefined8 *)puVar1;
      lVar5 = thunk_FUN_0216e7a0(lVar4,uVar7);
                    /* try { // try from 022ffc38 to 023ffc4b has its CatchHandler @ 022ffe34 */
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar4,uVar7);
      }
    }
    lVar4 = FUN_0216aff4(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar5,lVar6);
                    /* try { // try from 022ffc54 to 023ffc5b has its CatchHandler @ 022ffe04 */
    bVar3 = lVar4 != lVar6;
    lVar6 = lVar4;
  } while (bVar3);
                    /* try { // try from 022ffc6c to 023ffc7b has its CatchHandler @ 022ffecc */
  return;
}

