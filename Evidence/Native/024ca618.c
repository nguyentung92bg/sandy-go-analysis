/* IL2CPP: Dino.BusSand.View.MechanicLayer$$FreeStation
void Dino_BusSand_View_MechanicLayer__FreeStation (Dino_BusSand_View_MechanicLayer_o* __this, Dino_BusSand_View_MechanicLayer_Deco_o* d, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$FreeStation
   void Dino_BusSand_View_MechanicLayer__FreeStation (Dino_BusSand_View_MechanicLayer_o* __this,
   Dino_BusSand_View_MechanicLayer_Deco_o* d, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__FreeStation_23ca618(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9c9df & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd2f8);
    FUN_02132f7c(PTR_DAT_04cbd388);
    bRam0000000004f9c9df = 1;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xac);
    if (-1 < iVar1) {
      lVar2 = *(long *)(param_1 + 0xe0);
      if (lVar2 == 0) goto LAB_024ca6f0;
      if (iVar1 < *(int *)(lVar2 + 0x18)) {
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        Dino_BusSand_Core_BusObb___ctor_242201c
                  (_UNK_00e69d78,_UNK_00e69d78,0x3ff0000000000000,0,0,0,&uStack_80,0);
        uStack_48 = uStack_78;
        uStack_50 = uStack_80;
        uStack_38 = uStack_68;
        uStack_40 = uStack_70;
        uStack_28 = uStack_58;
        uStack_30 = uStack_60;
        System_Collections_Generic_List_BusObb___set_Item_39f7c8c
                  (lVar2,iVar1,&uStack_50,*(undefined8 *)PTR_DAT_04cbd388);
        *(undefined4 *)(param_2 + 0xac) = 0xffffffff;
      }
    }
    return;
  }
LAB_024ca6f0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

