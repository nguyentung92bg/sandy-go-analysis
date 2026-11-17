/* IL2CPP: Dino.BusSand.View.ChainRig$$Lengths
void Dino_BusSand_View_ChainRig__Lengths (Dino_BusSand_View_ChainRig_o* __this, Dino_BusSand_View_VehicleView_o* a, Dino_BusSand_View_VehicleView_o* b, float* d1, float* d2, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.ChainRig$$Lengths
   void Dino_BusSand_View_ChainRig__Lengths (Dino_BusSand_View_ChainRig_o* __this,
   Dino_BusSand_View_VehicleView_o* a, Dino_BusSand_View_VehicleView_o* b, float* d1, float* d2,
   const MethodInfo* method); */

void Dino_BusSand_View_ChainRig__Lengths_2391808
               (long param_1,long param_2,long param_3,float *param_4,float *param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  undefined8 uStack_58;
  
  if ((bRam0000000004f9c8cd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbc0f8);
    bRam0000000004f9c8cd = 1;
  }
  puVar2 = PTR_DAT_04cbc0f8;
  uStack_58 = 0;
  if (((*(long *)(param_1 + 0x10) != 0) && (param_2 != 0)) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x58), lVar4 != 0)) {
    System_Collections_Generic_Dictionary_int__Int32Enum___TryGetValue_3431fdc
              (lVar4,*(undefined4 *)(param_2 + 0x20),(long)&uStack_58 + 4,
               *(undefined8 *)PTR_DAT_04cbc0f8);
    if (((*(long *)(param_1 + 0x10) != 0) && (param_3 != 0)) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x58), lVar4 != 0)) {
      System_Collections_Generic_Dictionary_int__Int32Enum___TryGetValue_3431fdc
                (lVar4,*(undefined4 *)(param_3 + 0x20),&uStack_58,*(undefined8 *)puVar2);
      uVar1 = uStack_58._4_4_;
      if (*(int *)(param_2 + 0x2c) == 4) {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_024919e0;
        fVar6 = *(float *)(*(long *)(param_1 + 0x18) + 0xb4);
        iVar3 = Dino_BusSand_Core_BusFootprint__LengthGrains_2411548
                          (uStack_58._4_4_,*(undefined4 *)(param_1 + 0x40),0);
        dVar7 = (double)fVar6;
        uVar1 = *(undefined4 *)(param_1 + 0x40);
        *param_4 = (float)((*(double *)(param_1 + 0x38) + (double)iVar3) * 0.5 * dVar7);
        iVar3 = Dino_BusSand_Core_BusFootprint__LengthGrains_2411548(uStack_58 & 0xffffffff,uVar1,0)
        ;
        fVar6 = (float)((*(double *)(param_1 + 0x38) + (double)iVar3) * 0.5 * dVar7);
      }
      else {
        dVar7 = *(double *)(param_1 + 0x38) / (double)*(int *)(param_1 + 0x40);
        if (*(int *)(*(long *)PTR_DAT_04cbc080 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        dVar5 = (double)Dino_BusSand_Core_BusGeometry__LengthCells_2429dc0(uVar1,0);
        fVar6 = (float)Dino_BusSand_View_VehicleView__get_CellWorld_2400ff8(param_2,0);
        *param_4 = fVar6 * (float)((dVar7 + dVar5) * 0.5);
        dVar5 = (double)Dino_BusSand_Core_BusGeometry__LengthCells_2429dc0(uStack_58 & 0xffffffff,0)
        ;
        fVar6 = (float)Dino_BusSand_View_VehicleView__get_CellWorld_2400ff8(param_2,0);
        fVar6 = fVar6 * (float)((dVar7 + dVar5) * 0.5);
      }
      *param_5 = fVar6;
      return;
    }
  }
LAB_024919e0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

