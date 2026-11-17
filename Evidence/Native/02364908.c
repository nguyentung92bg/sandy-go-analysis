/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$<ReselectCompeting>b__64_0
bool Dino_BusSand_App_Meta_RacingRobotSession___ReselectCompeting_b__64_0 (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, Dino_BusSand_App_Meta_RacingRobotAgent_o* a, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$<ReselectCompeting>b__64_0
   bool Dino_BusSand_App_Meta_RacingRobotSession___ReselectCompeting_b__64_0
   (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, Dino_BusSand_App_Meta_RacingRobotAgent_o* a,
   const MethodInfo* method); */

undefined8
Dino_BusSand_App_Meta_RacingRobotSession___ReselectCompeting_b__64_0_2264908
          (long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  int iVar16;
  
  if ((bRam0000000004f9c04e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb44f8);
    bRam0000000004f9c04e = 1;
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar9 = *(long *)PTR_DAT_04cb44f8;
  if (*(long *)(lVar5 + 0x10) != 0) {
    iVar4 = System_Collections_Generic_HashSet_object___InternalGetHashCode_37e89d4
                      (lVar5,param_2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0xb0));
    lVar10 = *(long *)(lVar5 + 0x10);
    if (lVar10 == 0) {
LAB_038e5c14:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = *(uint *)(lVar10 + 0x18);
    iVar16 = 0;
    if (uVar2 != 0) {
      iVar16 = iVar4 / (int)uVar2;
    }
    uVar3 = iVar4 - iVar16 * uVar2;
    if (uVar2 <= uVar3) {
LAB_038e5bd4:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    uVar2 = *(int *)(lVar10 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar2) {
      lVar10 = *(long *)(lVar5 + 0x18);
      if (lVar10 == 0) goto LAB_038e5c14;
      uVar11 = *(undefined8 *)(lVar10 + 0x18);
      iVar16 = 0;
      do {
        if ((uint)uVar11 <= uVar2) goto LAB_038e5bd4;
        lVar1 = lVar10 + 0x20 + (ulong)uVar2 * 0x10;
        if (*(int *)(lVar10 + 0x20 + (ulong)uVar2 * 0x10) == iVar4) {
          plVar15 = *(long **)(lVar5 + 0x30);
          if (plVar15 == (long *)0x0) goto LAB_038e5c14;
          uVar11 = *(undefined8 *)(lVar1 + 8);
          lVar8 = *(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x20);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_0216b470(lVar8);
          }
          lVar12 = *plVar15;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar8) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_038e5b74;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_0216b7a4(plVar15,lVar8,0);
LAB_038e5b74:
          uVar13 = (*(code *)*puVar6)(plVar15,uVar11,param_2,puVar6[1]);
          if ((uVar13 & 1) != 0) {
            return 1;
          }
          uVar11 = *(undefined8 *)(lVar10 + 0x18);
        }
        if ((int)(uint)uVar11 <= iVar16) {
          thunk_FUN_021985a8(PTR_DAT_04caa348);
          uVar11 = thunk_FUN_0216e89c();
          uVar7 = thunk_FUN_021985a8(PTR_DAT_04cc7428);
          System_InvalidOperationException___ctor_482ff30(uVar11,uVar7,0);
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar11,lVar9);
        }
        if ((uint)uVar11 <= uVar2) goto LAB_038e5bd4;
        uVar2 = *(uint *)(lVar1 + 4);
        iVar16 = iVar16 + 1;
      } while (-1 < (int)uVar2);
    }
  }
  return 0;
}

