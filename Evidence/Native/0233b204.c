/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$HallIconPackId
int32_t Dino_BusSand_App_Meta_GiftPackFeature__HallIconPackId (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, System_String_o* iconName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$HallIconPackId
   int32_t Dino_BusSand_App_Meta_GiftPackFeature__HallIconPackId
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, System_String_o* iconName, const MethodInfo*
   method); */

undefined4
Dino_BusSand_App_Meta_GiftPackFeature__HallIconPackId_223b204(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar1 = PTR_DAT_04caec48;
  if ((bRam0000000004f9bed0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3370);
    FUN_02132f7c(PTR_DAT_04cb3378);
    FUN_02132f7c(PTR_DAT_04cb3380);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04cb3388);
    bRam0000000004f9bed0 = 1;
  }
  lVar3 = *(long *)puVar1;
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  if (**(char **)(lVar3 + 0xb8) == '\0') {
    uVar8 = 0;
  }
  else {
    Dino_BusSand_App_Meta_GiftPackFeature__RefreshActiveStates_223669c(param_1);
    puVar2 = PTR_DAT_04cb3378;
    puVar1 = PTR_DAT_04cb3370;
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_98,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_04cb3388);
    lStack_70 = lStack_88;
    uStack_78 = puStack_90;
    uStack_80 = uStack_98;
    uStack_98 = 0;
    puStack_90 = &uStack_80;
    do {
      do {
        do {
          do {
            uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_80,*(undefined8 *)puVar2);
            lVar3 = lStack_70;
            if ((uVar4 & 1) == 0) {
              uVar8 = 0;
              goto LAB_0233b3c4;
            }
            if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
          } while ((*(uint *)(lStack_70 + 0x54) < 7) &&
                  ((1 << (ulong)(*(uint *)(lStack_70 + 0x54) & 0x1f) & 0x58U) != 0));
          lVar5 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8
                            (param_1,*(undefined4 *)(lStack_70 + 0x10));
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        } while (((*(char *)(lVar5 + 0x30) == '\0') || (*(char *)(lVar5 + 0x6d) != '\0')) ||
                (*(long *)(lVar5 + 0x20) < 1));
        lVar6 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
        lVar9 = *(long *)(lVar5 + 0x20);
        lVar5 = Dino_BusSand_App_Meta_GiftPackFeature__PackDuration_223a2e0
                          (param_1,*(undefined4 *)(lVar3 + 0x10));
      } while (lVar5 + lVar9 <= lVar6 / 1000);
      uVar7 = Dino_BusSand_App_Meta_GiftPackFeature__HallIconPath_2235c6c
                        (param_1,*(undefined4 *)(lVar3 + 0x10));
      uVar4 = System_String__op_Equality_46d1108(uVar7,param_2,0);
    } while ((uVar4 & 1) == 0);
    uVar8 = *(undefined4 *)(lVar3 + 0x10);
LAB_0233b3c4:
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_80,*(undefined8 *)puVar1);
  }
  return uVar8;
}

