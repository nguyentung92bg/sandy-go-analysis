/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$Play
void Dino_BusSand_App_UI_HomeToonFace__Play (Dino_BusSand_App_UI_HomeToonFace_o* __this, System_ValueTuple_HomeToonFace_Pose__float__array* beats, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$Play
   void Dino_BusSand_App_UI_HomeToonFace__Play (Dino_BusSand_App_UI_HomeToonFace_o* __this,
   System_ValueTuple_HomeToonFace_Pose__float__array* beats, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeToonFace__Play_22f2048(long param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if ((bRam0000000004f9c470 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb71a8);
    bRam0000000004f9c470 = 1;
  }
  if ((param_2 == 0) || (*(long *)(param_1 + 0x40) == 0)) goto LAB_023f21e0;
  uVar7 = *(ulong *)(param_2 + 0x18);
  iVar3 = *(int *)(*(long *)(param_1 + 0x40) + 0x18);
  iVar6 = (int)uVar7;
  if (iVar3 <= iVar6) {
    iVar6 = iVar3;
  }
  *(int *)(param_1 + 0x50) = iVar6;
  puVar4 = PTR_DAT_04cb71a8;
  if (iVar6 < 1) {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  else {
    uVar8 = 0;
    uVar7 = uVar7 & 0xffffffff;
    puVar9 = (undefined8 *)(param_2 + 0x20);
    lVar10 = 0x20;
    do {
      if (uVar7 <= uVar8) goto LAB_023f21dc;
      uStack_58 = puVar9[1];
      uStack_60 = *puVar9;
      uStack_50 = *(undefined4 *)(puVar9 + 2);
      lVar11 = *(long *)(param_1 + 0x40);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uStack_78 = uStack_58;
      uStack_80 = uStack_60;
      uStack_70 = uStack_50;
      uVar5 = Dino_BusSand_App_UI_HomeToonFace__Pack_22f1a18(&uStack_80);
      if (lVar11 == 0) goto LAB_023f21e0;
      if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_023f21dc;
      *(undefined8 *)(lVar11 + lVar10) = uVar5;
      thunk_FUN_02134474(lVar11 + lVar10,uVar5);
      uVar7 = (ulong)*(uint *)(param_2 + 0x18);
      if (uVar7 <= uVar8) goto LAB_023f21dc;
      lVar11 = *(long *)(param_1 + 0x48);
      if (lVar11 == 0) goto LAB_023f21e0;
      if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_023f21dc;
      iVar6 = *(int *)(param_1 + 0x50);
      puVar2 = (undefined4 *)((long)puVar9 + 0x14);
      lVar1 = uVar8 * 4;
      uVar8 = uVar8 + 1;
      puVar9 = puVar9 + 3;
      lVar10 = lVar10 + 8;
      *(undefined4 *)(lVar11 + lVar1 + 0x20) = *puVar2;
    } while ((long)uVar8 < (long)iVar6);
    *(undefined4 *)(param_1 + 0x54) = 0;
    if (0 < iVar6) {
      lVar10 = *(long *)(param_1 + 0x40);
      if (lVar10 != 0) {
        if (*(int *)(lVar10 + 0x18) == 0) {
LAB_023f21dc:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar10 = *(long *)(lVar10 + 0x20);
        if (lVar10 != 0) {
          if (*(int *)(lVar10 + 0x18) == 0) goto LAB_023f21dc;
          if (0.0 <= *(float *)(lVar10 + 0x20)) {
            return;
          }
          lVar10 = *(long *)(param_1 + 0x10);
          if (lVar10 != 0) {
            *(float *)(lVar10 + 0xe0) = *(float *)(lVar10 + 0xe0) + 7.0;
            return;
          }
        }
      }
LAB_023f21e0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

