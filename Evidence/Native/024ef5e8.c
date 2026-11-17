/* IL2CPP: Dino.BusSand.View.VehicleBatch$$get_I
Dino_BusSand_View_VehicleBatch_o* Dino_BusSand_View_VehicleBatch__get_I (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleBatch$$get_I
   Dino_BusSand_View_VehicleBatch_o* Dino_BusSand_View_VehicleBatch__get_I (const MethodInfo*
   method); */

undefined8 Dino_BusSand_View_VehicleBatch__get_I_23ef5e8(void)

{
  undefined *puVar1;
  long lVar2;
  
                    /* try { // try from 024ef5e8 to 025ef627 has its CatchHandler @ 024ef6ec */
  puVar1 = PTR_DAT_04cbc2c8;
  if ((bRam0000000004f9cab1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc2c8);
    bRam0000000004f9cab1 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
                    /* try { // try from 024ef628 to 025ef6c3 has its CatchHandler @ 024ef448 */
    lVar2 = *(long *)puVar1;
  }
  return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
}

