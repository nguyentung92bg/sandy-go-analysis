/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton$$OnDestroy
void Dino_BusSand_App_UI_BattleRoyaleHallButton__OnDestroy (Dino_BusSand_App_UI_BattleRoyaleHallButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton$$OnDestroy
   void Dino_BusSand_App_UI_BattleRoyaleHallButton__OnDestroy
   (Dino_BusSand_App_UI_BattleRoyaleHallButton_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleHallButton__OnDestroy_218b9f8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_04cadc50;
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 0228b9fc to 0238ba73 has its CatchHandler @ 0228b9fc
                       catch() { ... } // from try @ 0228b9fc with catch @ 0228b9fc
                       catch() { ... } // from try @ 0228ba80 with catch @ 0228b9fc */
  if ((bRam0000000004f9b97d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadc50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b97d = 1;
  }
  uVar4 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar4,param_1,0);
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 0228ba74 to 0238ba7f has its CatchHandler @ 0228baa0 */
                    /* try { // try from 0228ba80 to 0238bab3 has its CatchHandler @ 0228b9fc */
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = 0;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar2 + 0xb8) >> 0xc & 0x3f),
                   (*(ulong *)(*(long *)puVar2 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
                    /* catch() { ... } // from try @ 0228ba74 with catch @ 0228baa0 */
  return;
}

