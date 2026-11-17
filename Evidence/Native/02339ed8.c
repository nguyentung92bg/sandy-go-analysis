/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$QueuePopup
void Dino_BusSand_App_Meta_GiftPackFeature__QueuePopup (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$QueuePopup
   void Dino_BusSand_App_Meta_GiftPackFeature__QueuePopup (Dino_BusSand_App_Meta_GiftPackFeature_o*
   __this, int32_t packId, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__QueuePopup_2239ed8(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 unaff_x30;
  
  if ((bRam0000000004f9bec7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04cb35c0);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cae230);
    bRam0000000004f9bec7 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar3 = System_Collections_Generic_List_int___Contains_3a2c3ec
                      (*(long *)(param_1 + 0x28),param_2,*(undefined8 *)PTR_DAT_04cad860);
    if (((uVar3 & 1) != 0) ||
       (uVar3 = Dino_BusSand_App_Meta_GiftPackFeature__CanShowPopup_223a7f4(param_1,param_2),
       (uVar3 & 1) == 0)) {
      return;
    }
    lVar4 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(param_1,param_2);
    puVar1 = PTR_DAT_04cae230;
    if (lVar4 == 0) {
      iVar10 = 0x7fffffff;
    }
    else {
      iVar10 = *(int *)(lVar4 + 0x3c);
    }
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      uVar9 = *(uint *)(lVar4 + 0x18);
      uVar8 = 0;
      do {
        if (*(int *)(lVar4 + 0x18) <= (int)uVar8) {
LAB_0233a004:
          lVar6 = *(long *)PTR_DAT_04cb35c0;
          uVar8 = *(uint *)(lVar4 + 0x18);
          if (uVar8 < uVar9) {
            System_ThrowHelper__ThrowArgumentOutOfRangeException_485066c(0xd,0x1b,0);
            uVar8 = *(uint *)(lVar4 + 0x18);
          }
          lVar5 = *(long *)(lVar4 + 0x10);
          if (lVar5 != 0) {
            if (uVar8 == *(uint *)(lVar5 + 0x18)) {
              System_Collections_Generic_List_int___EnsureCapacity_3a2c62c
                        (lVar4,uVar8 + 1,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x78));
              uVar8 = *(uint *)(lVar4 + 0x18);
              lVar5 = *(long *)(lVar4 + 0x10);
            }
            if (uVar8 - uVar9 != 0 && (int)uVar9 <= (int)uVar8) {
              System_Array__Copy_4852078
                        (lVar5,uVar9,lVar5,uVar9 + 1,uVar8 - uVar9,0,in_x6,in_x7,unaff_x30);
              lVar5 = *(long *)(lVar4 + 0x10);
            }
            if (lVar5 != 0) {
              if (*(uint *)(lVar5 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              *(undefined4 *)(lVar5 + (long)(int)uVar9 * 4 + 0x20) = param_2;
              *(ulong *)(lVar4 + 0x18) =
                   CONCAT44((int)((ulong)*(undefined8 *)(lVar4 + 0x18) >> 0x20) + 1,
                            (int)*(undefined8 *)(lVar4 + 0x18) + 1);
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar2 = System_Collections_Generic_List_int___get_Item_3a2bd74
                          (lVar4,uVar8,*(undefined8 *)puVar1);
        lVar4 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(param_1,uVar2);
        if (lVar4 == 0) {
          iVar7 = 0x7fffffff;
        }
        else {
          iVar7 = *(int *)(lVar4 + 0x3c);
        }
        lVar4 = *(long *)(param_1 + 0x28);
        if (iVar10 < iVar7) {
          uVar9 = uVar8;
          if (lVar4 != 0) goto LAB_0233a004;
          break;
        }
        uVar8 = uVar8 + 1;
      } while (lVar4 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

