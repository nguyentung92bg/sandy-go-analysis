/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$LayoutHole
void Dino_BusSand_App_UI_GuidePanel__LayoutHole (Dino_BusSand_App_UI_GuidePanel_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$LayoutHole
   void Dino_BusSand_App_UI_GuidePanel__LayoutHole (Dino_BusSand_App_UI_GuidePanel_o* __this, float
   k, const MethodInfo* method); */

void Dino_BusSand_App_UI_GuidePanel__LayoutHole_22ca1c0(float param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c36c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabdc0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c36c = 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x88);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x90);
  fVar5 = 0.0;
  if (0.0 <= param_1) {
    fVar5 = param_1;
  }
  fVar5 = fVar5 * (*(float *)(param_2 + 0xd0) + *(float *)(param_2 + 0xd0) + 100.0) * 0.5;
  fVar8 = *(float *)(param_2 + 200) - fVar5;
  fVar6 = *(float *)(param_2 + 0xcc) - fVar5;
  fVar7 = *(float *)(param_2 + 200) + fVar5;
  fVar5 = *(float *)(param_2 + 0xcc) + fVar5;
  if (*(int *)(*(long *)PTR_DAT_04cabdc0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_UI_GuidePanel__PlaceBox_22ca3c4(fVar8,fVar6,fVar7,fVar5,uVar4);
  Dino_BusSand_App_UI_GuidePanel__PlaceBox_22ca3c4
            (0xc57a0000,0xc57a0000,fVar8,0x457a0000,*(undefined8 *)(param_2 + 0x98));
  Dino_BusSand_App_UI_GuidePanel__PlaceBox_22ca3c4
            (fVar7,0xc57a0000,0x457a0000,0x457a0000,*(undefined8 *)(param_2 + 0xa0));
  Dino_BusSand_App_UI_GuidePanel__PlaceBox_22ca3c4
            (fVar8,fVar5,fVar7,0x457a0000,*(undefined8 *)(param_2 + 0xa8));
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = *(long *)(param_2 + 0xb0);
  if ((bRam0000000004f9c36d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c36d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(lVar3,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
            ((fVar8 + fVar7) * 0.5,(fVar6 + -4000.0) * 0.5,lVar3,0);
  if ((bRam0000000004fa8a8a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7bc8,0);
    bRam0000000004fa8a8a = 1;
  }
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 != 0) {
      if (pcRam0000000004fa8ae0 == (code *)0x0) {
        pcRam0000000004fa8ae0 = (code *)FUN_02132f40(&UNK_00e51f73);
      }
      (*pcRam0000000004fa8ae0)(lVar3,&stack0xffffffffffffffe8);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

