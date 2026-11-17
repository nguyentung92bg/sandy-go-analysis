/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<LivesChecks>b__37_5
bool Dino_BusSand_Cheat_AutoQa___c___LivesChecks_b__37_5 (Dino_BusSand_Cheat_AutoQa___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<LivesChecks>b__37_5
   bool Dino_BusSand_Cheat_AutoQa___c___LivesChecks_b__37_5 (Dino_BusSand_Cheat_AutoQa___c_o*
   __this, const MethodInfo* method); */

uint Dino_BusSand_Cheat_AutoQa___c___LivesChecks_b__37_5_2344e88(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar1 = PTR_DAT_04cb9568;
                    /* try { // try from 02444e98 to 02544ea3 has its CatchHandler @ 02444fe0 */
  if ((bRam0000000004f9c6bf & 1) == 0) {
                    /* try { // try from 02444ea4 to 02544eaf has its CatchHandler @ 02444fdc */
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04cb97a8);
    bRam0000000004f9c6bf = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
  if (lVar3 != 0) {
                    /* try { // try from 02444ee0 to 02544eeb has its CatchHandler @ 02444fcc */
    lVar5 = *(long *)PTR_DAT_04cb97a8;
    puVar6 = *(undefined8 **)(lVar5 + 0x38);
                    /* try { // try from 02444eec to 02544ef7 has its CatchHandler @ 02444fc8 */
    if (puVar6 == (undefined8 *)0x0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      puVar6 = *(undefined8 **)(lVar5 + 0x38);
      if (puVar6 == (undefined8 *)0x0) {
        FUN_0216b4cc(lVar5);
        puVar6 = *(undefined8 **)(lVar5 + 0x38);
      }
    }
    uVar4 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8(lVar3,*puVar6);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    puVar1 = PTR_DAT_04ca9ae8;
    if ((bRam0000000004fa8638 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
      bRam0000000004fa8638 = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar4,0);
    return (uVar2 ^ 0xffffffff) & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

