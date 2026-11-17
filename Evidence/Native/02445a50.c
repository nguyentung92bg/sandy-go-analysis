/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<TowerBus>b__41_4
bool Dino_BusSand_Cheat_AutoQa___c___TowerBus_b__41_4 (Dino_BusSand_Cheat_AutoQa___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<TowerBus>b__41_4
   bool Dino_BusSand_Cheat_AutoQa___c___TowerBus_b__41_4 (Dino_BusSand_Cheat_AutoQa___c_o* __this,
   const MethodInfo* method); */

uint Dino_BusSand_Cheat_AutoQa___c___TowerBus_b__41_4_2345a50(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cb9568;
                    /* try { // try from 02445a64 to 02545a67 has its CatchHandler @ 02445a80 */
                    /* try { // try from 02445a68 to 02545a83 has its CatchHandler @ 024458b4 */
  if ((bRam0000000004f9c6d2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
                    /* catch() { ... } // from try @ 02445a64 with catch @ 02445a80 */
    FUN_02132f7c(PTR_DAT_04cb9438);
                    /* try { // try from 02445a84 to 02545a8b has its CatchHandler @ 02445a94 */
    bRam0000000004f9c6d2 = 1;
  }
                    /* try { // try from 02445a8c to 02545a97 has its CatchHandler @ 024458b4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02445a84 with catch @ 02445a94
                        */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
  if (lVar3 != 0) {
    uVar2 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (lVar3,*(undefined8 *)PTR_DAT_04cb9438);
    return (uVar2 ^ 0xffffffff) & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

