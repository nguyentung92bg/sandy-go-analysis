/* IL2CPP: Dino.BusSand.App.UI.HallScene$$Show
void Dino_BusSand_App_UI_HallScene__Show (Dino_BusSand_App_UI_HallScene_o* __this, int32_t level, int32_t previousLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HallScene$$Show
   void Dino_BusSand_App_UI_HallScene__Show (Dino_BusSand_App_UI_HallScene_o* __this, int32_t level,
   int32_t previousLevel, const MethodInfo* method); */

void Dino_BusSand_App_UI_HallScene__Show_22d0fd8(long param_1,int param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((bRam0000000004f9c3b5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac6d8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c3b5 = 1;
  }
  lVar3 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
  if (lVar3 != 0) {
    UnityEngine_GameObject__SetActive_43c1408(lVar3,1,0);
    Dino_BusSand_App_UI_HallScene__StopSequence_22d1224(param_1);
    Dino_BusSand_App_UI_HallScene__LoadEnvironment_22d1250(param_1);
    Dino_BusSand_App_UI_HallScene__ApplyCameraPreset_22d0e24(param_1);
    Dino_BusSand_App_UI_HallScene__ApplyRenderSettings_22d1934(param_1);
    Dino_BusSand_App_UI_HallScene__MuteGameplayLights_22d1a28(param_1);
                    /* try { // try from 023d1068 to 024d1183 has its CatchHandler @ 023d1068
                       catch() { ... } // from try @ 023d1068 with catch @ 023d1068
                       catch() { ... } // from try @ 023d13f8 with catch @ 023d1068
                       catch() { ... } // from try @ 023d1464 with catch @ 023d1068
                       catch() { ... } // from try @ 023d148c with catch @ 023d1068 */
    Dino_BusSand_App_UI_HallScene__ApplyCanvases_22d1c6c(param_1);
    Dino_BusSand_App_UI_HallScene__AdaptBackground_22d1f04(param_1);
    puVar1 = PTR_DAT_04cac6d8;
    if (*(long *)(param_1 + 0x20) != 0) {
      UnityEngine_Behaviour__set_enabled_43bc50c(*(long *)(param_1 + 0x20),1,0);
      uVar2 = 0;
      iVar6 = param_2;
      if ((0 < param_3) && (param_3 != param_2)) {
        uVar5 = *(undefined8 *)(param_1 + 0x38);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
        iVar6 = param_3;
        if ((uVar2 & 1) == 0) {
          iVar6 = param_2;
        }
      }
      Dino_BusSand_App_UI_HallScene__SetLabel_22d2248(param_1,iVar6);
      Dino_BusSand_App_UI_HallScene__SetCupIdle_22d2650(param_1,iVar6);
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      uVar5 = Dino_BusSand_App_UI_HallScene__RotateName_22d26d0(param_1);
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar3);
      }
      Dino_BusSand_App_UI_HallScene__SampleAt_22d27b4(0,uVar7,uVar5);
      *(undefined4 *)(param_1 + 0x28) = 0;
      if ((uVar2 & 1) != 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x38);
        uVar5 = Dino_BusSand_App_UI_HallScene__ChangeName_22d28e4(param_1,param_3);
        lVar3 = *(long *)puVar1;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar3);
        }
        fVar8 = (float)Dino_BusSand_App_UI_HallScene__ClipLength_22d2a10(uVar7,uVar5);
        uVar7 = *(undefined8 *)(param_1 + 0x40);
        uVar5 = Dino_BusSand_App_UI_HallScene__RotateName_22d26d0(param_1);
                    /* try { // try from 023d1184 to 024d118b has its CatchHandler @ 023d1410 */
        fVar9 = (float)Dino_BusSand_App_UI_HallScene__ClipLength_22d2a10(uVar7,uVar5);
        if (fVar8 <= fVar9) {
          fVar8 = fVar9;
        }
        fVar10 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
                    /* try { // try from 023d11a8 to 024d11b3 has its CatchHandler @ 023d1404 */
        fVar9 = _UNK_00e207cc;
        if (_UNK_00e207cc <= fVar8 + _UNK_00e1fefc) {
          fVar9 = fVar8 + _UNK_00e1fefc;
        }
                    /* try { // try from 023d11cc to 024d11d3 has its CatchHandler @ 023d1444 */
        *(float *)(param_1 + 0x28) = fVar10 + fVar9;
        uVar5 = Dino_BusSand_App_UI_HallScene__CupChange_22d2ae4(param_1,param_3,param_2);
        uVar5 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_1,uVar5,0);
        puVar4 = (undefined8 *)(param_1 + 0x70);
        *puVar4 = uVar5;
                    /* try { // try from 023d11f8 to 024d11ff has its CatchHandler @ 023d13fc */
        if (iRam00000000051c1b10 != 0) {
          FUN_02220bf0(1L << ((ulong)puVar4 >> 0xc & 0x3f),
                       ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
        }
        return;
      }
                    /* try { // try from 023d120c to 024d1217 has its CatchHandler @ 023d1400 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

