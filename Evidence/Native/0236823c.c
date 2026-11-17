/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$get_DailyGiftChest
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_Meta_Monetization__get_DailyGiftChest (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$get_DailyGiftChest
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_Meta_Monetization__get_DailyGiftChest (const MethodInfo* method); */

long Dino_BusSand_App_Meta_Monetization__get_DailyGiftChest_226823c(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar3 = PTR_DAT_04cb1e78;
  puVar2 = PTR_DAT_04cb1e68;
  if ((bRam0000000004f9c090 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae910);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04caca60);
    FUN_02132f7c(PTR_DAT_04cb1e68);
    FUN_02132f7c(PTR_DAT_04cb1e78);
    bRam0000000004f9c090 = 1;
  }
  lVar4 = Dino_BusSand_App_Meta_Monetization__RowRewards_2266508
                    (*(undefined8 *)puVar3,*(undefined8 *)puVar2);
  if (lVar4 != 0) {
    if (0 < *(int *)(lVar4 + 0x18)) {
      return lVar4;
    }
    lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
    System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
              (lVar4,*(undefined8 *)PTR_DAT_04caca50);
    puVar3 = PTR_DAT_04cae910;
    uStack_30 = 0;
    uStack_28 = 0;
    System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
              (&uStack_30,0x3e9,500,*(undefined8 *)PTR_DAT_04cae910);
    puVar2 = PTR_DAT_04cae058;
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x10);
      lVar6 = *(long *)PTR_DAT_04cae058;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          lVar5 = lVar5 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar5 + 0x20) = uStack_30;
          *(undefined8 *)(lVar5 + 0x28) = uStack_28;
        }
        else {
          System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                    (lVar4,uStack_30,uStack_28,
                     *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        uStack_40 = 0;
        uStack_38 = 0;
        System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
                  (&uStack_40,0x2715,1,*(undefined8 *)puVar3);
        lVar5 = *(long *)(lVar4 + 0x10);
        lVar6 = *(long *)puVar2;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar5 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            lVar5 = lVar5 + (long)(int)uVar1 * 0x10;
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar5 + 0x20) = uStack_40;
            *(undefined8 *)(lVar5 + 0x28) = uStack_38;
          }
          else {
            System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                      (lVar4,uStack_40,uStack_38,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          uStack_50 = 0;
          uStack_48 = 0;
          System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
                    (&uStack_50,0x2713,1,*(undefined8 *)puVar3);
          lVar5 = *(long *)(lVar4 + 0x10);
          lVar6 = *(long *)puVar2;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar5 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              lVar5 = lVar5 + (long)(int)uVar1 * 0x10;
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar5 + 0x20) = uStack_50;
              *(undefined8 *)(lVar5 + 0x28) = uStack_48;
            }
            else {
              System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                        (lVar4,uStack_50,uStack_48,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
            uStack_60 = 0;
            uStack_58 = 0;
            System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
                      (&uStack_60,0x2712,1,*(undefined8 *)puVar3);
            lVar5 = *(long *)(lVar4 + 0x10);
            lVar6 = *(long *)puVar2;
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar5 != 0) {
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                lVar5 = lVar5 + (long)(int)uVar1 * 0x10;
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar5 + 0x20) = uStack_60;
                *(undefined8 *)(lVar5 + 0x28) = uStack_58;
              }
              else {
                System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                          (lVar4,uStack_60,uStack_58,
                           *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              uStack_70 = 0;
              uStack_68 = 0;
              System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
                        (&uStack_70,0x2714,1,*(undefined8 *)puVar3);
              lVar5 = *(long *)(lVar4 + 0x10);
              lVar6 = *(long *)puVar2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar5 != 0) {
                uVar1 = *(uint *)(lVar4 + 0x18);
                if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                  lVar5 = lVar5 + (long)(int)uVar1 * 0x10;
                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar5 + 0x20) = uStack_70;
                  *(undefined8 *)(lVar5 + 0x28) = uStack_68;
                  return lVar4;
                }
                System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                          (lVar4,uStack_70,uStack_68,
                           *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                return lVar4;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

