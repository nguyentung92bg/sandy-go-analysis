/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel.<FlyReward>d__24$$MoveNext
bool Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__FlyReward_d__24__MoveNext (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__FlyReward_d__24_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel.<FlyReward>d__24$$MoveNext
   bool Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__FlyReward_d__24__MoveNext
   (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__FlyReward_d__24_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__FlyReward_d__24__MoveNext_21b2624(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  
  if ((bRam0000000004f9ba96 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cad7c8);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caf1d0);
    FUN_02132f7c(PTR_DAT_04caf068);
    FUN_02132f7c(PTR_DAT_04cae8c8);
    bRam0000000004f9ba96 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(param_1 + 0x10) == 1) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      UnityEngine_Object__Destroy_43c8114(uVar4,0);
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    lVar6 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (((lVar6 != 0) && (*(long *)(lVar6 + 0x50) != 0)) &&
       (lVar2 = System_Collections_Generic_List_object___get_Item_3a81924
                          (*(long *)(lVar6 + 0x50),*(undefined4 *)(param_1 + 0x28),
                           *(undefined8 *)PTR_DAT_04cad7c8), lVar2 != 0)) {
      lVar2 = UnityEngine_Transform__Find_43d4bec(lVar2,*(undefined8 *)PTR_DAT_04caf068,0);
      puVar1 = PTR_DAT_04ca9ae8;
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar2,0,0);
      if ((uVar3 & 1) != 0) {
        return 0;
      }
      if (lVar2 != 0) {
        uVar4 = UnityEngine_Component__get_gameObject_43bcde8(lVar2,0);
        uVar5 = UnityEngine_Component__get_transform_43bcd18(lVar6,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        lVar6 = UnityEngine_Object__Instantiate_object__2805310
                          (uVar4,uVar5,1,*(undefined8 *)PTR_DAT_04cad390);
        plVar7 = (long *)(param_1 + 0x30);
        *plVar7 = lVar6;
        thunk_FUN_02134474(plVar7,lVar6);
        if (*plVar7 != 0) {
          UnityEngine_GameObject__SetActive_43c1408(*plVar7,1,0);
          if ((*plVar7 != 0) &&
             (lVar6 = UnityEngine_GameObject__get_transform_43c1048(*plVar7,0), lVar6 != 0)) {
            uVar4 = UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)PTR_DAT_04cae8c8,0);
            uVar5 = System_Int32__ToString_482d750(param_1 + 0x2c,0);
            puVar1 = PTR_DAT_04caec68;
            if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
            }
            Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar4,uVar5,0);
            if (*plVar7 != 0) {
              uVar4 = UnityEngine_GameObject__get_transform_43c1048(*plVar7,0);
              fVar8 = (float)Dino_BusSand_App_UI_GiftPackUi__Play_21ada68
                                       (uVar4,*(undefined8 *)PTR_DAT_04caf1d0,0);
              if (fVar8 <= 0.0) {
                fVar8 = _UNK_00e200f8;
              }
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar4 = Dino_BusSand_App_UI_GiftPackUi__Wait_21ab7e4(fVar8,0);
              *(undefined8 *)(param_1 + 0x18) = uVar4;
              thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar4);
              *(undefined4 *)(param_1 + 0x10) = 1;
              return 1;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return 0;
}

