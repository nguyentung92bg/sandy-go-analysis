/* IL2CPP: Dino.BusSand.App.UI.GuideDimHoles$$TargetsScreenRect
bool Dino_BusSand_App_UI_GuideDimHoles__TargetsScreenRect (Dino_BusSand_App_UI_GuideDimHoles_o* __this, UnityEngine_Rect_o* rect, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GuideDimHoles$$TargetsScreenRect
   bool Dino_BusSand_App_UI_GuideDimHoles__TargetsScreenRect (Dino_BusSand_App_UI_GuideDimHoles_o*
   __this, UnityEngine_Rect_o* rect, const MethodInfo* method); */

int Dino_BusSand_App_UI_GuideDimHoles__TargetsScreenRect_22c7110(long param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  short sVar14;
  short sVar15;
  short sVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_50;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar6 = PTR_DAT_04cb68f0;
  if ((bRam0000000004f9c35d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb68f0);
    FUN_02132f7c(PTR_DAT_04cad708);
    bRam0000000004f9c35d = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = Dino_BusSand_App_UI_GuideDimHoles__get_Cam_22c6770();
  lVar9 = *(long *)(param_1 + 0x20);
  if (lVar9 != 0) {
    iVar11 = 0;
    iVar10 = 0;
    uStack_48 = UNK_00e6b350._8_2_;
    uStack_46 = UNK_00e6b350._10_6_;
    uStack_50 = (undefined8)UNK_00e6b350;
    do {
      fVar5 = (float)((ulong)uStack_50 >> 0x20);
      if (*(int *)(lVar9 + 0x18) <= iVar10) {
        fVar2 = 0.0;
        fVar3 = 0.0;
        uVar7 = 0;
        if (iVar11 != 0) {
          uVar17 = (undefined2)((uint6)uStack_46 >> 0x10);
          uVar18 = (undefined2)((uint6)uStack_46 >> 0x20);
          auVar4._8_2_ = uStack_48;
          auVar4._0_8_ = uStack_50;
          auVar13._8_2_ = uStack_48;
          auVar13._0_8_ = uStack_50;
          auVar13._10_2_ = (short)uStack_46;
          auVar13._12_2_ = uVar17;
          auVar13._14_2_ = uVar18;
          auVar4._10_2_ = (short)uStack_46;
          auVar4._12_2_ = uVar17;
          auVar4._14_2_ = uVar18;
          auVar13 = NEON_ext(auVar13,auVar4,8,1);
          fVar2 = auVar13._0_4_ - (float)uStack_50;
          fVar3 = auVar13._4_4_ - fVar5;
          uVar7 = uStack_50;
        }
        *param_2 = uVar7;
        param_2[1] = CONCAT26((short)((uint)fVar3 >> 0x10),CONCAT24(SUB42(fVar3,0),fVar2));
        return iVar11;
      }
      uVar8 = Dino_BusSand_App_UI_GuideDimHoles__TargetRect_22c6d78
                        (param_1,uVar7,iVar10,&uStack_38,&uStack_40);
      if ((uVar8 & 1) != 0) {
        iVar11 = 1;
        auVar19._8_2_ = uStack_48;
        auVar19._0_8_ = uStack_50;
        auVar19._10_6_ = uStack_46;
        auVar12._8_8_ = uStack_40;
        auVar12._0_8_ = uStack_38;
        sVar14 = -(ushort)(fVar5 < (float)((ulong)uStack_38 >> 0x20));
        sVar15 = -(ushort)((float)uStack_40 < auVar19._8_4_);
        sVar16 = -(ushort)((float)((ulong)uStack_40 >> 0x20) < (float)((uint6)uStack_46 >> 0x10));
        auVar1._4_2_ = sVar14;
        auVar1._0_4_ = (int)(short)-(ushort)((float)uStack_50 < (float)uStack_38);
        auVar1._6_2_ = sVar14 >> 0xf;
        auVar1._8_2_ = sVar15;
        auVar1._10_2_ = sVar15 >> 0xf;
        auVar1._12_2_ = sVar16;
        auVar1._14_2_ = sVar16 >> 0xf;
        auVar19 = auVar19 ^ (auVar19 ^ auVar12) & ~auVar1;
        uStack_48 = auVar19._8_2_;
        uStack_46 = auVar19._10_6_;
        uStack_50 = auVar19._0_8_;
      }
      lVar9 = *(long *)(param_1 + 0x20);
      iVar10 = iVar10 + 1;
    } while (lVar9 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

