/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$AutoExecutePendingCommand
void Dino_BusSand_App_Meta_StreakRateFeature__AutoExecutePendingCommand (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s, bool track, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$AutoExecutePendingCommand
   void Dino_BusSand_App_Meta_StreakRateFeature__AutoExecutePendingCommand
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s,
   bool track, const MethodInfo* method); */

void Dino_BusSand_App_Meta_StreakRateFeature__AutoExecutePendingCommand_224e360
               (undefined8 param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined4 uStack_44;
  
  if ((bRam0000000004f9bfb7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad8c8);
    FUN_02132f7c(PTR_DAT_04cad890);
    FUN_02132f7c(PTR_DAT_04cad898);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cad8a0);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cb3ba8);
    FUN_02132f7c(PTR_DAT_04cace58);
    bRam0000000004f9bfb7 = 1;
  }
  uStack_44 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if ((param_2 != 0) && (*(char *)(param_2 + 0x54) != '\0')) {
    lVar4 = Dino_BusSand_App_Meta_StreakRateFeature__BuildWinRewards_224ed14
                      (param_1,param_2,param_3 & 1,&uStack_44);
                    /* try { // try from 0234e420 to 0244e487 has its CatchHandler @ 0234e420
                       catch() { ... } // from try @ 0234e420 with catch @ 0234e420
                       catch() { ... } // from try @ 0234e48c with catch @ 0234e420
                       catch() { ... } // from try @ 0234e4fc with catch @ 0234e420
                       catch() { ... } // from try @ 0234e538 with catch @ 0234e420 */
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0234e4f8 to 0244e4fb has its CatchHandler @ 0234e504 */
      FUN_02133224();
    }
    System_Collections_Generic_List_int___GetEnumerator_3a2ca40
              (&uStack_60,lVar4,*(undefined8 *)PTR_DAT_04cad8a0);
    puVar3 = PTR_DAT_04cad890;
    puVar2 = PTR_DAT_04cace58;
    while (uVar5 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                             (&uStack_60,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
      Dino_BusSand_App_Meta_StreakTowerUtil__Grant_224ef30
                (uStack_50 & 0xffffffff,*(undefined8 *)puVar2);
    }
    System_Collections_Generic_List_Enumerator_int___Dispose_35ce6b8
              (&uStack_60,*(undefined8 *)PTR_DAT_04cad8c8);
                    /* try { // try from 0234e488 to 0244e48b has its CatchHandler @ 0234e504 */
                    /* try { // try from 0234e48c to 0244e4f7 has its CatchHandler @ 0234e420 */
    uVar1 = *(undefined4 *)(lVar4 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_GameTracking__GoldenStreakNodes_221a8d8(param_2,uVar1,0);
    Dino_BusSand_App_Meta_StreakRateFeature__ApplyWinProgress_224f0e4
              (param_1,param_2,uStack_44,param_3 & 1);
    puVar2 = PTR_DAT_04cb3ba8;
    *(undefined1 *)(param_2 + 0x54) = 0;
    Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(param_1,*(undefined8 *)puVar2);
  }
  return;
}

