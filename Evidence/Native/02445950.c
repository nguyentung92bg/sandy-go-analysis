/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<TowerBus>b__41_2
bool Dino_BusSand_Cheat_AutoQa___c___TowerBus_b__41_2 (Dino_BusSand_Cheat_AutoQa___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<TowerBus>b__41_2
   bool Dino_BusSand_Cheat_AutoQa___c___TowerBus_b__41_2 (Dino_BusSand_Cheat_AutoQa___c_o* __this,
   const MethodInfo* method); */

bool Dino_BusSand_Cheat_AutoQa___c___TowerBus_b__41_2_2345950(void)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c6d0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04cad558);
    bRam0000000004f9c6d0 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
  if (lVar4 != 0) {
    uVar5 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (lVar4,*(undefined8 *)PTR_DAT_04cad558);
                    /* try { // try from 024459b4 to 025459bb has its CatchHandler @ 02445a48 */
    if ((uVar5 & 1) == 0) {
      bVar2 = false;
    }
    else {
      iVar3 = Dino_BusSand_App_Meta_WinStreak__get_Current_2293690(0);
      bVar2 = iVar3 == 3;
    }
                    /* try { // try from 024459d0 to 025459d3 has its CatchHandler @ 02445a38 */
                    /* try { // try from 024459d8 to 025459e3 has its CatchHandler @ 02445a44 */
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

