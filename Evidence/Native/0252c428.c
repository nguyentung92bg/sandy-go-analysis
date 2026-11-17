/* IL2CPP: Dino.BusSand.Core.BusGeometry$$CanEscape
bool Dino_BusSand_Core_BusGeometry__CanEscape (Dino_BusSand_Core_BusObb_o* t, System_Collections_Generic_List_BusObb__o* others, int32_t self, double w, double h, double eps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.BusGeometry$$CanEscape
   bool Dino_BusSand_Core_BusGeometry__CanEscape (Dino_BusSand_Core_BusObb_o* t,
   System_Collections_Generic_List_BusObb__o* others, int32_t self, double w, double h, double eps,
   const MethodInfo* method); */

bool Dino_BusSand_Core_BusGeometry__CanEscape_242c428
               (double param_1,double param_2,undefined8 param_3,double *param_4,long param_5,
               int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  bool bVar5;
  double dVar6;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  puVar1 = PTR_DAT_04cbc080;
  if ((bRam0000000004f9cbcf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbd2f8);
    FUN_02132f7c(PTR_DAT_04cbeec8);
    bRam0000000004f9cbcf = 1;
  }
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  dStack_78 = 0.0;
  dStack_80 = 0.0;
  dStack_68 = 0.0;
  dStack_70 = 0.0;
  dStack_58 = 0.0;
  dStack_60 = 0.0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cbeec8;
  dStack_60 = param_4[4];
  dStack_58 = param_4[5];
  dVar6 = (param_1 + param_2 + dStack_60 + dStack_60) * 0.5;
  dStack_68 = param_4[3];
  dStack_70 = param_4[2];
  dStack_60 = dStack_60 + dVar6;
  dStack_80 = *param_4 + dStack_70 * dVar6;
  dStack_78 = param_4[1] + dStack_68 * dVar6;
  if (param_5 != 0) {
    bVar5 = *(int *)(param_5 + 0x18) < 1;
    if (0 < *(int *)(param_5 + 0x18)) {
      iVar4 = 0;
      do {
        if (param_6 != iVar4) {
          System_Collections_Generic_List_BusObb___get_Item_39f7c24
                    (&uStack_e0,param_5,iVar4,*(undefined8 *)puVar2);
          uStack_a8 = uStack_d8;
          uStack_b0 = uStack_e0;
          uStack_98 = uStack_c8;
          uStack_a0 = uStack_d0;
          uStack_88 = uStack_b8;
          uStack_90 = uStack_c0;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar3 = Dino_BusSand_Core_BusGeometry__Overlaps_242c220(param_3,&dStack_80,&uStack_b0);
          if ((uVar3 & 1) != 0) {
            return bVar5;
          }
        }
        iVar4 = iVar4 + 1;
        bVar5 = *(int *)(param_5 + 0x18) <= iVar4;
      } while (iVar4 < *(int *)(param_5 + 0x18));
    }
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

