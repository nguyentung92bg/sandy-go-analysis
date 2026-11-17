/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel$$.ctor
void Dino_BusSand_App_UI_StreakEventPanel___ctor (Dino_BusSand_App_UI_StreakEventPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel$$.ctor
   void Dino_BusSand_App_UI_StreakEventPanel___ctor (Dino_BusSand_App_UI_StreakEventPanel_o* __this,
   const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_StreakEventPanel___ctor_21c2c04(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_04cafd40;
  puVar1 = PTR_DAT_04cafd38;
                    /* try { // try from 022c2c1c to 023c2ca3 has its CatchHandler @ 022c2c1c
                       catch() { ... } // from try @ 022c2c1c with catch @ 022c2c1c
                       catch() { ... } // from try @ 022c2cb4 with catch @ 022c2c1c */
  if ((bRam0000000004f9baec & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cafd40);
    FUN_02132f7c(PTR_DAT_04cafd38);
    bRam0000000004f9baec = 1;
  }
  uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x98),uVar3);
  puVar2 = PTR_DAT_04cb1698;
  puVar1 = PTR_DAT_04cb1690;
  if ((bRam0000000004f9bc9e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1698,0);
    FUN_02132f7c(PTR_DAT_04cb1690);
    bRam0000000004f9bc9e = 1;
  }
  uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x30),uVar3);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa830a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa830a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

