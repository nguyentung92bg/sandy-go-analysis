/* IL2CPP: Dino.BusSand.Core.Garage$$CanEmit
bool Dino_BusSand_Core_Garage__CanEmit (Dino_BusSand_Core_Garage_o* __this, Dino_BusSand_Core_TruckGrid_o* yard, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.Garage$$CanEmit
   bool Dino_BusSand_Core_Garage__CanEmit (Dino_BusSand_Core_Garage_o* __this,
   Dino_BusSand_Core_TruckGrid_o* yard, const MethodInfo* method); */

uint Dino_BusSand_Core_Garage__CanEmit_242a31c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f9cbf2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbed98);
    FUN_02132f7c(PTR_DAT_04cbee80);
    bRam0000000004f9cbf2 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x30);
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
      if (*(int *)(param_1 + 0x38) == -1) {
        uVar6 = System_Collections_Generic_List_ValueTuple_int__Int32Enum____get_Item_39ae9d8
                          (lVar5,0,*(undefined8 *)PTR_DAT_04cbee80);
        Dino_BusSand_Core_Garage__ExitCenter_242b678(param_1,uVar6 >> 0x20,&uStack_38,&uStack_40);
        uVar3 = uStack_38;
        uVar2 = uStack_40;
        uVar1 = *(undefined4 *)(param_1 + 0x28);
        if (*(int *)(*(long *)PTR_DAT_04cbc080 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_Core_BusGeometry__Make_242bfa4(&uStack_70,uVar3,uVar2,uVar1,uVar6 >> 0x20);
        if (param_2 == 0) goto LAB_0252a454;
        uVar6 = Dino_BusSand_Core_BusGeometry__IsInsideYard_242c34c
                          ((double)*(int *)(param_2 + 0x14),(double)*(int *)(param_2 + 0x10),
                           _UNK_00e6a330,&uStack_70);
        if ((uVar6 & 1) != 0) {
          uVar4 = Dino_BusSand_Core_TruckGrid__OverlapsAny_242d7ac(param_2,&uStack_70,0xffffffff);
          uVar4 = uVar4 ^ 1;
          goto LAB_0252a43c;
        }
      }
      uVar4 = 0;
    }
LAB_0252a43c:
    return uVar4 & 1;
  }
LAB_0252a454:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

