/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotLineup$$ParseIds
System_Collections_Generic_List_int__o* Dino_BusSand_App_Meta_RacingRobotLineup__ParseIds (System_String_o* csv, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotLineup$$ParseIds
   System_Collections_Generic_List_int__o* Dino_BusSand_App_Meta_RacingRobotLineup__ParseIds
   (System_String_o* csv, const MethodInfo* method); */

long Dino_BusSand_App_Meta_RacingRobotLineup__ParseIds_2264df0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  undefined4 uStack_24;
  
  puVar3 = PTR_DAT_04cad6e8;
  puVar2 = PTR_DAT_04caa1c8;
  if ((bRam0000000004f9c054 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    bRam0000000004f9c054 = 1;
  }
  uStack_24 = 0;
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_int____ctor_3a2b7dc(lVar4,*(undefined8 *)puVar3);
  uVar5 = System_String__IsNullOrWhiteSpace_46d20a0(param_1,0);
  if ((uVar5 & 1) == 0) {
    if ((param_1 == 0) ||
       (lVar6 = System_String__Split_46d50c0(param_1,0x2c,0,0), puVar2 = PTR_DAT_04caa160,
       lVar6 == 0)) {
LAB_02364f50:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar1) {
      uVar10 = 0;
      do {
        if (uVar1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar7 = *(long *)(lVar6 + (long)(int)uVar10 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_02364f50;
        uVar8 = System_String__Trim_46d6ee0(lVar7,0);
        uVar5 = System_Int32__TryParse_482de64(uVar8,&uStack_24,0);
        if ((uVar5 & 1) != 0) {
          if (lVar4 == 0) goto LAB_02364f50;
          lVar7 = *(long *)(lVar4 + 0x10);
          lVar9 = *(long *)puVar2;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_02364f50;
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = uStack_24;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_3a2c06c
                      (lVar4,uStack_24,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar1);
    }
  }
  return lVar4;
}

