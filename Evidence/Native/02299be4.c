/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$ApplyKeys
void Dino_BusSand_App_UI_BattleRoyaleUi__ApplyKeys (UnityEngine_Transform_o* root, System_String_array* pathKeyPairs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$ApplyKeys
   void Dino_BusSand_App_UI_BattleRoyaleUi__ApplyKeys (UnityEngine_Transform_o* root,
   System_String_array* pathKeyPairs, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleUi__ApplyKeys_2199be4(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  
  puVar2 = PTR_DAT_04ca9ae8;
                    /* try { // try from 02299bec to 02399bf7 has its CatchHandler @ 02299c1c */
                    /* try { // try from 02299bf8 to 02399c47 has its CatchHandler @ 02299af4 */
  if ((bRam0000000004f9b9fa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
                    /* catch() { ... } // from try @ 02299bec with catch @ 02299c1c */
                    /* catch() { ... } // from try @ 02299bcc with catch @ 02299c24 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b9fa = 1;
  }
                    /* catch() { ... } // from try @ 02299b84 with catch @ 02299c38 */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  puVar2 = PTR_DAT_04ca9d18;
  if ((((uVar3 & 1) == 0) && (param_2 != 0)) && (uVar1 = *(uint *)(param_2 + 0x18), 1 < (int)uVar1))
  {
    uVar8 = 1;
    do {
      if (uVar1 <= uVar8 - 1) {
LAB_02299d34:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      uVar4 = Dino_BusSand_App_UI_BattleRoyaleUi__Resolve_219c760
                        (param_1,*(undefined8 *)(param_2 + (long)(int)(uVar8 - 1) * 8 + 0x20));
      if (*(uint *)(param_2 + 0x18) <= uVar8) goto LAB_02299d34;
      lVar7 = *(long *)puVar2;
      lVar5 = *(long *)(lVar7 + 0x38);
      uVar6 = *(undefined8 *)(param_2 + (long)(int)uVar8 * 8 + 0x20);
      if (lVar5 == 0) {
                    /* catch() { ... } // from try @ 02299d08 with catch @ 02299cb4 */
        FUN_0216b4cc(lVar7);
        lVar5 = *(long *)(lVar7 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0216b470();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0216b470();
      }
                    /* try { // try from 02299d00 to 02399d07 has its CatchHandler @ 02299d54 */
      uVar6 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060(uVar6,**(undefined8 **)(lVar5 + 0xb8));
                    /* try { // try from 02299d08 to 02399d67 has its CatchHandler @ 02299cb4 */
      Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar4,uVar6);
      uVar1 = *(uint *)(param_2 + 0x18);
      uVar8 = uVar8 + 2;
    } while ((int)uVar8 < (int)uVar1);
  }
  return;
}

