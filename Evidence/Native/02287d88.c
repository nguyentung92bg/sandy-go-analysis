/* IL2CPP: Dino.BusSand.App.UI.ActivityQuitFlow$$.ctor
void Dino_BusSand_App_UI_ActivityQuitFlow___ctor (Dino_BusSand_App_UI_ActivityQuitFlow_o* __this, Dino_BusSand_App_UI_QuitPanel_o* panel, System_Collections_Generic_List_IStakeActivity__o* list, System_Action_o* quit, System_Action_o* stay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ActivityQuitFlow$$.ctor
   void Dino_BusSand_App_UI_ActivityQuitFlow___ctor (Dino_BusSand_App_UI_ActivityQuitFlow_o* __this,
   Dino_BusSand_App_UI_QuitPanel_o* panel, System_Collections_Generic_List_IStakeActivity__o* list,
   System_Action_o* quit, System_Action_o* stay, const MethodInfo* method); */

void Dino_BusSand_App_UI_ActivityQuitFlow___ctor_2187d88
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar2 = PTR_DAT_04cada70;
  puVar1 = PTR_DAT_04cada68;
                    /* try { // try from 02287dc8 to 02387e3b has its CatchHandler @ 02287dc8
                       catch() { ... } // from try @ 02287dc8 with catch @ 02287dc8
                       catch() { ... } // from try @ 02287e48 with catch @ 02287dc8 */
  if ((bRam0000000004f9b965 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada70);
    FUN_02132f7c(PTR_DAT_04cada68);
    bRam0000000004f9b965 = 1;
  }
  uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x38),uVar3);
  System_Object___ctor_4870e5c(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),param_3);
                    /* try { // try from 02287e3c to 02387e47 has its CatchHandler @ 02287e78 */
  *(undefined8 *)(param_1 + 0x20) = param_4;
                    /* try { // try from 02287e48 to 02387e93 has its CatchHandler @ 02287dc8 */
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x20),param_4);
  puVar4 = (undefined8 *)(param_1 + 0x28);
  *puVar4 = param_5;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar4 >> 0xc & 0x3f),
                 ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

