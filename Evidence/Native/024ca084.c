/* IL2CPP: Dino.BusSand.View.MechanicLayer$$InsideLot
bool Dino_BusSand_View_MechanicLayer__InsideLot (Dino_BusSand_View_MechanicLayer_o* __this, Dino_BusSand_Core_BusObb_o* o, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$InsideLot
   bool Dino_BusSand_View_MechanicLayer__InsideLot (Dino_BusSand_View_MechanicLayer_o* __this,
   Dino_BusSand_Core_BusObb_o* o, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__InsideLot_23ca084(long param_1,double *param_2)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  
  if (((*(long *)(param_1 + 0x20) != 0) &&
      (lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x10), lVar2 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x30), lVar2 != 0)) {
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    uVar3 = 0xffffffff;
    auVar6._8_8_ = (long)(int)((ulong)uVar5 >> 0x20);
    auVar6._0_8_ = (long)(int)uVar5;
    auVar6 = NEON_scvtf(auVar6,8);
    do {
      iVar4 = -3;
      auVar7._0_8_ = *param_2 + param_2[2] * param_2[4] * (double)(int)uVar3;
      auVar7._8_8_ = param_2[1] + param_2[3] * param_2[4] * (double)(int)uVar3;
      auVar7 = NEON_ext(auVar7,auVar7,8,1);
      do {
        dVar10 = auVar7._0_8_ - param_2[2] * param_2[5] * (double)(iVar4 + 2);
        dVar9 = auVar7._8_8_ + param_2[3] * param_2[5] * (double)(iVar4 + 2);
        dVar8 = (double)NEON_fminnm(dVar9,dVar10);
        if (!(bool)(_UNK_00e699a0 <= dVar8 & ~(auVar6._0_8_ + 0.2 < dVar10) &
                   ~(auVar6._8_8_ + 0.2 < dVar9))) {
          return;
        }
        iVar4 = iVar4 + 2;
      } while (iVar4 < 0);
      bVar1 = 0x7ffffffd < uVar3;
      uVar3 = uVar3 + 2;
    } while (bVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

