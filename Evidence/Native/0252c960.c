/* IL2CPP: Dino.BusSand.Core.BusGeometry$$FirstContactIndex
int32_t Dino_BusSand_Core_BusGeometry__FirstContactIndex (Dino_BusSand_Core_BusObb_o* t, System_Collections_Generic_List_BusObb__o* others, int32_t self, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.BusGeometry$$FirstContactIndex
   int32_t Dino_BusSand_Core_BusGeometry__FirstContactIndex (Dino_BusSand_Core_BusObb_o* t,
   System_Collections_Generic_List_BusObb__o* others, int32_t self, const MethodInfo* method); */

int Dino_BusSand_Core_BusGeometry__FirstContactIndex_242c960(long param_1,long param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  double dStack_58;
  
  if ((bRam0000000004f9cbd1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbd2f8);
    FUN_02132f7c(PTR_DAT_04cbeec8);
    bRam0000000004f9cbd1 = 1;
  }
  puVar2 = PTR_DAT_04cbeec8;
  puVar1 = PTR_DAT_04cbc080;
  dStack_58 = 0.0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(param_2 + 0x18) < 1) {
    iVar6 = -1;
  }
  else {
    iVar4 = 0;
    dVar9 = 1.7976931348623157e+308;
    iVar5 = -1;
    do {
      dVar10 = dVar9;
      iVar6 = iVar5;
      if (param_3 != iVar4) {
        System_Collections_Generic_List_BusObb___get_Item_39f7c24
                  (&uStack_c0,param_2,iVar4,*(undefined8 *)puVar2);
        uVar7 = *(undefined8 *)(param_1 + 0x10);
        uVar8 = *(undefined8 *)(param_1 + 0x18);
        uStack_88 = uStack_b8;
        uStack_90 = uStack_c0;
        uStack_78 = uStack_a8;
        uStack_80 = uStack_b0;
        uStack_68 = uStack_98;
        uStack_70 = uStack_a0;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        bVar3 = Dino_BusSand_Core_BusGeometry__TryFirstContact_242c6f0
                          (uVar7,uVar8,param_1,&uStack_90,&dStack_58);
        dVar10 = dStack_58;
        iVar6 = iVar4;
        if ((bVar3 & dStack_58 < dVar9) == 0) {
          dVar10 = dVar9;
          iVar6 = iVar5;
        }
      }
      iVar4 = iVar4 + 1;
      dVar9 = dVar10;
      iVar5 = iVar6;
    } while (iVar4 < *(int *)(param_2 + 0x18));
  }
  return iVar6;
}

