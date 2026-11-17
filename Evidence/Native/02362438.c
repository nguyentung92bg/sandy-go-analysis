/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$EnforceOneFinisher
void Dino_BusSand_App_Meta_RacingRobotSession__EnforceOneFinisher (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$EnforceOneFinisher
   void Dino_BusSand_App_Meta_RacingRobotSession__EnforceOneFinisher
   (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_RacingRobotSession__EnforceOneFinisher_2262438(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  float fVar9;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  
  if ((bRam0000000004f9c044 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4460);
    FUN_02132f7c(PTR_DAT_04cb4468);
    FUN_02132f7c(PTR_DAT_04cb4470);
    FUN_02132f7c(PTR_DAT_04cb4478);
    bRam0000000004f9c044 = 1;
  }
  puVar4 = PTR_DAT_04cb4478;
  puVar3 = PTR_DAT_04cb4468;
  puVar2 = PTR_DAT_04cb4460;
  uStack_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x18) + 0x18);
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_88,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cb4478);
    iVar8 = 0;
    lStack_60 = lStack_78;
    puStack_68 = puStack_80;
    uStack_70 = uStack_88;
    uStack_88 = 0;
    puStack_80 = &uStack_70;
    fVar9 = 3.4028235e+38;
    lVar7 = 0;
    while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_70,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
      if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (iVar1 <= *(int *)(lStack_60 + 0x9c)) {
        iVar8 = iVar8 + 1;
        if (*(float *)(lStack_60 + 0xac) < fVar9) {
          fVar9 = *(float *)(lStack_60 + 0xac);
          lVar7 = lStack_60;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_70,*(undefined8 *)puVar2);
    if (1 < iVar8) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_02362604;
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_88,*(long *)(param_1 + 0x28),*(undefined8 *)puVar4);
      lStack_60 = lStack_78;
      puStack_68 = puStack_80;
      uStack_70 = uStack_88;
      uStack_88 = 0;
      puStack_80 = &uStack_70;
      while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_70,*(undefined8 *)puVar3), lVar5 = lStack_60,
            (uVar6 & 1) != 0) {
        if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if ((iVar1 <= *(int *)(lStack_60 + 0x9c)) && (lStack_60 != lVar7)) {
          Dino_BusSand_App_Meta_RacingRobotAgent__SetProgress_225f5c0(lStack_60,iVar1 + -1,0);
          *(undefined4 *)(lVar5 + 0xa0) = 2;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_70,*(undefined8 *)puVar2);
    }
    return;
  }
LAB_02362604:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

