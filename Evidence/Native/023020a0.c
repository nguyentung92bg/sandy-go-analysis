/* IL2CPP: Dino.BusSand.App.Meta.AppUpdate$$CountDeclined
void Dino_BusSand_App_Meta_AppUpdate__CountDeclined (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.AppUpdate$$CountDeclined
   void Dino_BusSand_App_Meta_AppUpdate__CountDeclined (const MethodInfo* method); */

void Dino_BusSand_App_Meta_AppUpdate__CountDeclined_22020a0(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb1c08;
                    /* try { // try from 023020ac to 024020af has its CatchHandler @ 023020f0 */
  if ((bRam0000000004f9bcae & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1c08);
    bRam0000000004f9bcae = 1;
  }
  lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 023020ac with catch @ 023020f0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02302120 with catch @ 023020f4
                        */
  return;
}

