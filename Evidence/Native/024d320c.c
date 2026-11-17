/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnSpawned
void Dino_BusSand_View_MechanicLayer__OnSpawned (Dino_BusSand_View_MechanicLayer_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnSpawned
   void Dino_BusSand_View_MechanicLayer__OnSpawned (Dino_BusSand_View_MechanicLayer_o* __this,
   int32_t id, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__OnSpawned_23d320c(long param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9c9ff & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd660);
    bRam0000000004f9c9ff = 1;
  }
  uStack_28 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar1 != 0)) {
    uVar2 = Dino_BusSand_Core_TruckGrid__TryGet_241d34c(lVar1,param_2,&uStack_28,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) goto LAB_024d32a4;
      uVar2 = System_Collections_Generic_Dictionary_int__object___ContainsKey_3437520
                        (*(long *)(param_1 + 0x60),param_2,*(undefined8 *)PTR_DAT_04cbd660);
      if ((uVar2 & 1) == 0) {
        Dino_BusSand_View_MechanicLayer__Decorate_23c13b0(param_1,uStack_28);
      }
    }
    return;
  }
LAB_024d32a4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

