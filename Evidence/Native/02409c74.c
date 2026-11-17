/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$OnClose
void Dino_BusSand_App_UI_HudPanel__OnClose (Dino_BusSand_App_UI_HudPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$OnClose
   void Dino_BusSand_App_UI_HudPanel__OnClose (Dino_BusSand_App_UI_HudPanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HudPanel__OnClose_2309c74(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c50a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac448);
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04cb7fe8);
    FUN_02132f7c(PTR_DAT_04cb7ff0);
    FUN_02132f7c(PTR_DAT_04cb7ff8);
                    /* try { // try from 02409cd8 to 02509cdf has its CatchHandler @ 0240a490 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 02409ce4 to 02509ceb has its CatchHandler @ 0240a41c */
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c50a = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cac7e0;
                    /* try { // try from 02409d0c to 02509d13 has its CatchHandler @ 0240a418 */
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  puVar2 = PTR_DAT_04cb7ff0;
  if ((uVar5 & 1) != 0) {
                    /* try { // try from 02409d28 to 02509d33 has its CatchHandler @ 0240a414 */
    lVar7 = *(long *)(param_1 + 0x40);
                    /* try { // try from 02409d34 to 02509d63 has its CatchHandler @ 0240a468 */
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Action_int____ctor_35ef18c(uVar6,param_1,*(undefined8 *)puVar2,0);
    if (lVar7 == 0) goto LAB_02409e50;
    Dino_BusSand_App_Gameplay_GameplayController__remove_ItemConsumed_229c724(lVar7,uVar6,0);
    lVar7 = *(long *)(param_1 + 0x40);
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac448);
                    /* try { // try from 02409d74 to 02509d7b has its CatchHandler @ 0240a480 */
    System_Action_Int32Enum____ctor_35ef240(uVar6,param_1,*(undefined8 *)PTR_DAT_04cb7ff8,0);
    if (lVar7 == 0) goto LAB_02409e50;
                    /* try { // try from 02409d94 to 02509deb has its CatchHandler @ 0240a444 */
    Dino_BusSand_App_Gameplay_GameplayController__remove_StateChanged_229c354(lVar7,uVar6,0);
  }
  puVar4 = PTR_DAT_04cb7fe8;
  puVar2 = PTR_DAT_04cabaf8;
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Action_int____ctor_35ef18c(uVar6,param_1,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_Profile__remove_ItemChanged_226f714(uVar6,0);
  uVar6 = *(undefined8 *)(param_1 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 02409dfc to 02509e07 has its CatchHandler @ 0240a3f0 */
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02409e0c to 02509e17 has its CatchHandler @ 0240a3d8 */
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0xb8) != 0) &&
     (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0xb8),0), lVar7 != 0
     )) {
    if ((bRam0000000004fa8360 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
      bRam0000000004fa8360 = 1;
    }
    if (lVar7 != 0) {
      lVar8 = *(long *)(lVar7 + 0x10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
      }
      if (pcRam0000000004fa8430 == (code *)0x0) {
        pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
      }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004fa8430)(lVar8,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_02409e50:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

