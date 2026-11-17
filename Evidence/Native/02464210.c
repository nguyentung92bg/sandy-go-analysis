/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$SnapshotSave
void Dino_BusSand_Cheat_CheatManager__SnapshotSave (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$SnapshotSave
   void Dino_BusSand_Cheat_CheatManager__SnapshotSave (Dino_BusSand_Cheat_CheatManager_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__SnapshotSave_2364210(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uStack_24;
  
  puVar2 = PTR_DAT_04cba458;
  if ((bRam0000000004f9c76f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba458);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cba898);
    FUN_02132f7c(PTR_DAT_04cab2b8);
    bRam0000000004f9c76f = 1;
  }
  uStack_24 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_Cheat_CheatManager__get_Ready_235da4c();
  puVar1 = PTR_DAT_04cabaf8;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__Save_226c548(0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0(0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 024642d4 to 025642db has its CatchHandler @ 024646f0 */
      thunk_FUN_0218fdac();
    }
    uVar5 = Dino_BusSand_Cheat_CheatManager__get_SnapshotPath_2367f70();
    System_IO_File__Copy_47f89f0(uVar4,uVar5,1,0);
    uStack_24 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
                    /* try { // try from 02464300 to 0256430b has its CatchHandler @ 024646d8 */
    uVar4 = System_Int32__ToString_482d750(&uStack_24,0);
    uVar4 = System_String__Concat_46d2b84
                      (*(undefined8 *)PTR_DAT_04cba898,uVar4,*(undefined8 *)PTR_DAT_04cab2b8,0);
    Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,uVar4);
  }
                    /* try { // try from 02464340 to 02564347 has its CatchHandler @ 02464670 */
  return;
}

