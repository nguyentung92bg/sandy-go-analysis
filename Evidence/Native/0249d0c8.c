/* IL2CPP: Dino.BusSand.View.GameView$$SpawnVehicle
void Dino_BusSand_View_GameView__SpawnVehicle (Dino_BusSand_View_GameView_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$SpawnVehicle
   void Dino_BusSand_View_GameView__SpawnVehicle (Dino_BusSand_View_GameView_o* __this, int32_t id,
   const MethodInfo* method); */

void Dino_BusSand_View_GameView__SpawnVehicle_239d0c8(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  long lStack_38;
  
  if ((bRam0000000004f9c90c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc448);
    FUN_02132f7c(PTR_DAT_04cbc450);
    FUN_02132f7c(PTR_DAT_04cbc458);
    FUN_02132f7c(PTR_DAT_04cbc460);
    bRam0000000004f9c90c = 1;
  }
  lStack_38 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x58), lVar4 != 0)) {
    uVar1 = System_Collections_Generic_Dictionary_int__Int32Enum___get_Item_34305d4
                      (lVar4,param_2,*(undefined8 *)PTR_DAT_04cbc450);
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
      if (lVar4 != 0) {
        uVar2 = System_Collections_Generic_Dictionary_int__TruckPayload___get_Item_3444f80
                          (lVar4,param_2,*(undefined8 *)PTR_DAT_04cbc448);
        uVar5 = Dino_BusSand_View_ArtPack__get_Active_238dea0();
        lVar4 = *(long *)(param_1 + 0x30);
        if ((uVar5 & 1) == 0) {
          if (lVar4 == 0) goto LAB_0249d2b0;
          fVar8 = *(float *)(lVar4 + 0x60) * _UNK_00e20170;
        }
        else {
          if (lVar4 == 0) goto LAB_0249d2b0;
          fVar8 = *(float *)(lVar4 + 0xb8) / _UNK_00e20574;
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          uVar7 = *(undefined8 *)(param_1 + 0x98);
          uVar3 = Dino_BusSand_Core_StageEngine__IsColorHidden_2423ce8
                            (*(long *)(param_1 + 0x20),param_2,0);
          if (*(long *)(param_1 + 0x30) != 0) {
            uVar9 = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0xfc);
            if (*(int *)(*(long *)PTR_DAT_04cbc460 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            lVar4 = Dino_BusSand_View_VehicleView__Create_23f3b48
                              (uVar9,fVar8,uVar7,param_2,uVar1,uVar2,uVar3 & 1,0);
            if ((*(long *)(param_1 + 0x20) != 0) &&
               (lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar6 != 0)) {
              uVar5 = Dino_BusSand_Core_TruckGrid__TryGet_241d34c(lVar6,param_2,&lStack_38,0);
              if ((uVar5 & 1) != 0) {
                if ((lStack_38 == 0) || (*(long *)(param_1 + 0x30) == 0)) goto LAB_0249d2b0;
                Dino_BusSand_View_StageLayout__YardToWorld_23e8904
                          (*(undefined8 *)(lStack_38 + 0x18),*(undefined8 *)(lStack_38 + 0x20),
                           *(long *)(param_1 + 0x30),0);
                if ((lStack_38 == 0) || (lVar4 == 0)) goto LAB_0249d2b0;
                Dino_BusSand_View_VehicleView__PlaceParked_23fd4e0
                          (lVar4,*(undefined4 *)(lStack_38 + 0x28),0);
              }
              if (*(long *)(param_1 + 0xe0) != 0) {
                System_Collections_Generic_Dictionary_int__object___set_Item_3437318
                          (*(long *)(param_1 + 0xe0),param_2,lVar4,*(undefined8 *)PTR_DAT_04cbc458);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0249d2b0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

