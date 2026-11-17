/* IL2CPP: Dino.BusSand.Core.Lane$$CanEmit
bool Dino_BusSand_Core_Lane__CanEmit (Dino_BusSand_Core_Lane_o* __this, Dino_BusSand_Core_TruckGrid_o* yard, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Lane$$CanEmit
   bool Dino_BusSand_Core_Lane__CanEmit (Dino_BusSand_Core_Lane_o* __this,
   Dino_BusSand_Core_TruckGrid_o* yard, const MethodInfo* method); */

uint Dino_BusSand_Core_Lane__CanEmit_242fbbc(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f9cc0c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbed98);
    FUN_02132f7c(PTR_DAT_04cbee80);
    bRam0000000004f9cc0c = 1;
  }
  lVar5 = *(long *)(param_1 + 0x28);
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (lVar5 != 0) {
    uVar4 = 0;
    if (*(int *)(lVar5 + 0x18) != 0) {
      if (*(int *)(param_1 + 0x30) == -1) {
        uVar6 = System_Collections_Generic_List_ValueTuple_int__Int32Enum____get_Item_39ae9d8
                          (lVar5,0,*(undefined8 *)PTR_DAT_04cbee80);
        Dino_BusSand_Core_Lane__OccupantCenter_242f388(param_1,uVar6 >> 0x20,&uStack_38,&uStack_40);
        uVar3 = uStack_38;
        uVar2 = uStack_40;
        uVar1 = *(undefined4 *)(param_1 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_04cbc080 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_Core_BusGeometry__Make_242bfa4(&uStack_a0,uVar3,uVar2,uVar1,uVar6 >> 0x20,0);
        uStack_48 = uStack_78;
        uStack_50 = uStack_80;
        uStack_68 = uStack_98;
        uStack_70 = uStack_a0;
        uStack_58 = uStack_88;
        uStack_60 = uStack_90;
        if (param_2 == 0) goto LAB_0252fce8;
        uVar4 = Dino_BusSand_Core_TruckGrid__OverlapsAnyTruck_242dd84(param_2,&uStack_70,0);
        uVar4 = uVar4 ^ 1;
      }
      else {
        uVar4 = 0;
      }
    }
    return uVar4 & 1;
  }
LAB_0252fce8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

