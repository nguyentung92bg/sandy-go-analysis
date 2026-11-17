/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleStartPanel$$SetMood
void Dino_BusSand_App_UI_BattleRoyaleStartPanel__SetMood (Dino_BusSand_App_UI_BattleRoyaleStartPanel_o* __this, bool unhappy, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleStartPanel$$SetMood
   void Dino_BusSand_App_UI_BattleRoyaleStartPanel__SetMood
   (Dino_BusSand_App_UI_BattleRoyaleStartPanel_o* __this, bool unhappy, const MethodInfo* method);
    */

void Dino_BusSand_App_UI_BattleRoyaleStartPanel__SetMood_219a1f8(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar1 = PTR_DAT_04caa038;
  if ((bRam0000000004f9b9e2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cae428);
    FUN_02132f7c(PTR_DAT_04cae430);
    FUN_02132f7c(PTR_DAT_04cae438);
    FUN_02132f7c(PTR_DAT_04cae440);
    FUN_02132f7c(PTR_DAT_04cae448);
    FUN_02132f7c(PTR_DAT_04cae450);
    bRam0000000004f9b9e2 = 1;
  }
  lVar5 = FUN_02133068(*(undefined8 *)puVar1,2);
  if (lVar5 == 0) {
LAB_0229a3f4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar5 + 0x18) != 0) {
    *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_04cae438;
    thunk_FUN_02134474((undefined8 *)(lVar5 + 0x20));
    if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)PTR_DAT_04cae448;
      thunk_FUN_02134474((undefined8 *)(lVar5 + 0x28));
      puVar4 = PTR_DAT_04cae450;
      puVar3 = PTR_DAT_04cae440;
      puVar2 = PTR_DAT_04cae430;
      puVar1 = PTR_DAT_04ca9ae8;
      if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
        uVar9 = 0;
        uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        do {
          if (uVar8 <= uVar9) goto LAB_0229a3f0;
          uVar6 = System_String__Concat_46d2b84
                            (*(undefined8 *)puVar3,*(undefined8 *)(lVar5 + 0x20 + uVar9 * 8),
                             *(undefined8 *)puVar4,0);
          lVar7 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,uVar6,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
          if ((uVar8 & 1) == 0) {
            if (lVar7 == 0) goto LAB_0229a3f4;
            uVar6 = UnityEngine_Transform__Find_43d4bec(lVar7,*(undefined8 *)PTR_DAT_04cae428,0);
                    /* try { // try from 0229a3a8 to 0239a3d7 has its CatchHandler @ 0229a3a8
                       catch() { ... } // from try @ 0229a3a8 with catch @ 0229a3a8
                       catch() { ... } // from try @ 0229a3e4 with catch @ 0229a3a8 */
            Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(uVar6,param_2 & 1);
            uVar6 = UnityEngine_Transform__Find_43d4bec(lVar7,*(undefined8 *)puVar2,0);
            Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(uVar6,(param_2 ^ 1) & 1);
          }
          uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
                    /* try { // try from 0229a3d8 to 0239a3e3 has its CatchHandler @ 0229a404 */
                    /* try { // try from 0229a3e4 to 0239a41f has its CatchHandler @ 0229a3a8 */
      return;
    }
  }
LAB_0229a3f0:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

