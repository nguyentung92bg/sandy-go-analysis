/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$OnMiss
void Dino_BusSand_App_Meta_JourneyTracking__OnMiss (UnityEngine_Vector2_o screen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$OnMiss
   void Dino_BusSand_App_Meta_JourneyTracking__OnMiss (UnityEngine_Vector2_o screen, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_JourneyTracking__OnMiss_221bf94(float param_1,float param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  double dVar9;
  float fVar10;
  
  puVar2 = PTR_DAT_04cac868;
  if ((bRam0000000004f9bd94 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac868);
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bd94 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9bcf9 == '\0') {
    FUN_02132f7c(PTR_DAT_04cac868);
    cRam0000000004f9bcf9 = '\x01';
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = **(long **)(lVar4 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
  if ((uVar5 & 1) == 0) {
    lVar4 = 0;
  }
  else {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar4 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(lVar4,0);
  }
  puVar2 = PTR_DAT_04caba90;
  if (*(int *)(*(long *)PTR_DAT_04caba90 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_Meta_JourneyTracking__Recording_221b330(lVar4);
  if ((uVar5 & 1) != 0) {
    iVar3 = UnityEngine_Screen__get_width_436a6a0(0);
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    uVar7 = (uint)((param_1 / (float)iVar3) * 8.0);
    if (6 < (int)uVar7) {
      uVar7 = 7;
    }
    uVar1 = 0;
    if ((param_1 / (float)iVar3) * 8.0 != INFINITY) {
      uVar1 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
    }
    iVar3 = UnityEngine_Screen__get_height_436a6c8(0);
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    lVar6 = *(long *)puVar2;
    fVar10 = (param_2 / (float)iVar3) * 12.0;
    uVar7 = (uint)fVar10;
    if (10 < (int)uVar7) {
      uVar7 = 0xb;
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar2;
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar8 = *(undefined8 *)(lVar4 + 0x78);
    lVar4 = **(long **)(lVar6 + 0xb8);
    dVar9 = (double)UnityEngine_Time__get_realtimeSinceStartupAsDouble_43cd760(0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar6 = -0x8000000000000000;
    if (dVar9 * _UNK_00e6a6f0 != INFINITY) {
      lVar6 = (long)(dVar9 * _UNK_00e6a6f0);
    }
    iVar3 = 0;
    if (fVar10 != INFINITY) {
      iVar3 = (uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) << 3;
    }
    Dino_BusSand_App_Meta_Journey_LevelJourney__Miss_2299fb4(lVar4,uVar8,lVar6,iVar3 + uVar1,0);
  }
  return;
}

