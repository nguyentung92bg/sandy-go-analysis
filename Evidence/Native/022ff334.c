/* IL2CPP: Dino.BusSand.App.UI.UIManager$$.ctor
void Dino_BusSand_App_UI_UIManager___ctor (Dino_BusSand_App_UI_UIManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIManager$$.ctor
   void Dino_BusSand_App_UI_UIManager___ctor (Dino_BusSand_App_UI_UIManager_o* __this, const
   MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_UIManager___ctor_21ff334(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  puVar3 = PTR_DAT_04cafcb8;
  puVar2 = PTR_DAT_04cabdf0;
  puVar1 = PTR_DAT_04cabde8;
  if ((bRam0000000004f9bc7f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabde8);
    FUN_02132f7c(PTR_DAT_04cabdf0);
                    /* try { // try from 022ff384 to 023ff38b has its CatchHandler @ 022ff47c */
    FUN_02132f7c(PTR_DAT_04cafcb8);
    bRam0000000004f9bc7f = 1;
  }
                    /* try { // try from 022ff398 to 023ff3c3 has its CatchHandler @ 022ff4f0 */
  uVar4 = FUN_02133068(*(undefined8 *)puVar3,6);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  thunk_FUN_02134474();
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar4,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x38),uVar4);
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022ff3d4 to 023ff3db has its CatchHandler @ 022ff4b4 */
  if ((bRam0000000004fa830a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa830a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_1;
  return auVar5;
}

