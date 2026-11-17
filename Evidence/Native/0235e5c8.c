/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotParser$$ParseFailRate
System_Collections_Generic_List_RacingFailRule__o* Dino_BusSand_App_Meta_RacingRobotParser__ParseFailRate (System_String_o* raw, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotParser$$ParseFailRate
   System_Collections_Generic_List_RacingFailRule__o*
   Dino_BusSand_App_Meta_RacingRobotParser__ParseFailRate (System_String_o* raw, const MethodInfo*
   method); */

long Dino_BusSand_App_Meta_RacingRobotParser__ParseFailRate_225e5c8(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  uint uStack_34;
  
  puVar3 = PTR_DAT_04cb4368;
  puVar2 = PTR_DAT_04cb4360;
  if ((bRam0000000004f9c028 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab6a0);
    FUN_02132f7c(PTR_DAT_04cab6c8);
    FUN_02132f7c(PTR_DAT_04cab6d0);
    FUN_02132f7c(PTR_DAT_04cb4370);
    FUN_02132f7c(PTR_DAT_04cab720);
    FUN_02132f7c(PTR_DAT_04cb4368);
    FUN_02132f7c(PTR_DAT_04cb4360);
    bRam0000000004f9c028 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_34 = 0;
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_RacingFailRule____ctor_3a9786c(lVar5,*(undefined8 *)puVar3);
  uVar6 = System_String__IsNullOrWhiteSpace_46d20a0(param_1,0);
  if ((uVar6 & 1) == 0) {
    lVar7 = Dino_BusSand_App_Meta_RacingRobotParser__SplitOuterComma_225e8ac(param_1);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_78,lVar7,*(undefined8 *)PTR_DAT_04cab720);
    puVar3 = PTR_DAT_04cb4370;
    puVar2 = PTR_DAT_04cab6c8;
    uStack_58 = puStack_70;
    uStack_60 = uStack_78;
    lStack_50 = lStack_68;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
LAB_0235e6d0:
    uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_60,*(undefined8 *)puVar2);
    if ((uVar6 & 1) != 0) {
      if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar7 = System_String__Trim_46d6ee0(lStack_50,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(lVar7 + 0x10) != 0) {
        iVar4 = System_String__IndexOf_46d72c4(lVar7,0x3a,0);
        if (-1 < iVar4) {
          lVar8 = System_String__Substring_46d4848(lVar7,0,iVar4,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar9 = System_String__Trim_46d6ee0(lVar8,0);
          uVar6 = System_Int32__TryParse_482de64(uVar9,&uStack_34,0);
          if ((uVar6 & 1) != 0) {
            uVar6 = (ulong)uStack_34;
            lVar7 = System_String__Substring_46d6a94(lVar7,iVar4 + 1,0);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar9 = System_String__Trim_46d6ee0(lVar7,0);
            lVar7 = Dino_BusSand_App_Meta_RacingRobotParser__ParseFloat_225e0dc(0,uVar9,0);
            if (lVar5 != 0) {
              lVar8 = *(long *)(lVar5 + 0x10);
              lVar10 = *(long *)puVar3;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar5 + 0x18);
                uVar6 = uVar6 | lVar7 << 0x20;
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                  *(ulong *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                }
                else {
                  System_Collections_Generic_List_RacingFailRule___AddWithResize_3a980f8
                            (lVar5,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_0235e6d0;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        }
      }
      goto LAB_0235e6d0;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_60,*(undefined8 *)PTR_DAT_04cab6a0);
  }
  return lVar5;
}

