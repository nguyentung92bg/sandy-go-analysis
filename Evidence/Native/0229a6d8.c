/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleStartPanel$$OnStartClick
void Dino_BusSand_App_UI_BattleRoyaleStartPanel__OnStartClick (Dino_BusSand_App_UI_BattleRoyaleStartPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleStartPanel$$OnStartClick
   void Dino_BusSand_App_UI_BattleRoyaleStartPanel__OnStartClick
   (Dino_BusSand_App_UI_BattleRoyaleStartPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleStartPanel__OnStartClick_219a6d8(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 0229a6d8 to 0239a6e3 has its CatchHandler @ 0229a708 */
                    /* try { // try from 0229a6e4 to 0239a733 has its CatchHandler @ 0229a5e0 */
  if ((bRam0000000004f9b9e5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae3e0);
    FUN_02132f7c(PTR_DAT_04cae408);
                    /* catch() { ... } // from try @ 0229a6d8 with catch @ 0229a708 */
    bRam0000000004f9b9e5 = 1;
  }
                    /* catch() { ... } // from try @ 0229a6b8 with catch @ 0229a710 */
                    /* catch() { ... } // from try @ 0229a670 with catch @ 0229a724 */
  if (((*(long *)(param_1 + 0x40) != 0) &&
      (uVar2 = Dino_BusSand_App_Meta_BattleRoyaleCore__CanStartNewRound_2221adc
                         (*(long *)(param_1 + 0x40),0), (uVar2 & 1) != 0)) &&
     (*(char *)(param_1 + 0x48) == '\0')) {
    Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)PTR_DAT_04cae408,1,0);
    Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)PTR_DAT_04cae3e0,0,0);
    *(undefined1 *)(param_1 + 0x48) = 1;
    iVar1 = UnityEngine_Random__Range_43b64e8(0x14,0x19,0);
    uVar3 = Dino_BusSand_App_UI_BattleRoyaleStartPanel__WaitAndStart_219a7c8
                      ((float)iVar1 * _UNK_00e20754,param_1);
    uVar3 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_1,uVar3,0);
    puVar4 = (undefined8 *)(param_1 + 0x50);
    *puVar4 = uVar3;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)puVar4 >> 0xc & 0x3f),
                   ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
  return;
}

